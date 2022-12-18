#include "gba.h" // Mode 0 Scaffold
#include "print.h"
#include "game.h"
#include "main_menu.h"
#include "bgdTiles.h"
#include "dig_dug_spritesheet.h"
#include "pause.h"
#include "win.h"
#include "lose.h"
#include "print.h"

// Function Prototypes
void initialize();

// State Prototypes
void goToStart();
void start();
void goToGame();
void game();
void goToPause();
void pause();
void goToWin();
void win();
void goToLose();
void lose();

enum {START, GAME, PAUSE, WIN, LOSE};
int state;

// Button variables
unsigned short buttons;
unsigned short oldButtons;

// Shadow OAM
OBJ_ATTR shadowOAM[128];

void initialize() {
    REG_DISPCTL = MODE0 | BG0_ENABLE | SPRITE_ENABLE;
    REG_BG0CNT = BG_CHARBLOCK(0) | BG_SCREENBLOCK(31) | BG_4BPP | BG_SIZE_SMALL;

    // Setup game tiles
    DMANow(3, bgdTilesTiles, &CHARBLOCK[1], bgdTilesTilesLen/2);
    // Sprite pallete and tiles
    DMANow(3, bgdTilesPal, SPRITEPALETTE, bgdTilesPalLen/2);
    DMANow(3, bgdTilesTiles, &CHARBLOCK[4], bgdTilesTilesLen/2);

    buttons = BUTTONS;
    oldButtons = buttons;

    goToStart();
}

void goToStart() {
    state = START;

    REG_DISPCTL = MODE0 | BG0_ENABLE;

    // setup main menu background
    REG_BG0CNT = BG_CHARBLOCK(0) | BG_SCREENBLOCK(7) | BG_4BPP | BG_SIZE_SMALL;
    DMANow(3, main_menuPal, PALETTE, main_menuPalLen / 2);
    DMANow(3, main_menuTiles, &CHARBLOCK[0], main_menuTilesLen / 2);
    DMANow(3, main_menuMap, &SCREENBLOCK[7], main_menuMapLen / 2);
}

void start() {
    if (BUTTON_PRESSED(BUTTON_START)) {
        initializeDirt();
        goToGame();
    }
}

void goToGame() {
    state = GAME;
    initializeGame();

    REG_DISPCTL = MODE0 | BG0_ENABLE | SPRITE_ENABLE;

    // setup game background using charblock 1 and 15
    REG_BG0CNT = BG_CHARBLOCK(1) | BG_SCREENBLOCK(15) | BG_4BPP | BG_SIZE_SMALL;
    DMANow(3, bgdTilesPal, PALETTE, bgdTilesPalLen/2);
}

void game() {
    if (BUTTON_PRESSED(BUTTON_SELECT)) {
        goToPause();
    }
    if (enemyCount == 0) { // you win if you kill all the enemies
        goToWin();
    }
    if (health == 0) { // you die if you get hit 3 times by enemies
        goToLose();
    }

    updateGame();
    waitForVBlank();
    drawGame();
}

void goToPause() {
    state = PAUSE;

    REG_DISPCTL = MODE0 | BG0_ENABLE;
    // Setup pause background
    REG_BG0CNT = BG_CHARBLOCK(0) | BG_SCREENBLOCK(7) | BG_4BPP | BG_SIZE_SMALL;
    DMANow(3, pausePal, PALETTE, pausePalLen / 2);
    DMANow(3, pauseTiles, &CHARBLOCK[0], pauseTilesLen / 2);
    DMANow(3, pauseMap, &SCREENBLOCK[7], pauseMapLen / 2);
}

void pause() {
    if (BUTTON_PRESSED(BUTTON_SELECT)) {
        goToGame();
    }
    if (BUTTON_PRESSED(BUTTON_START)) {
        goToStart();
    }
}

void goToWin() {
    state = WIN;

    REG_DISPCTL = MODE0 | BG0_ENABLE;
    // Setup win background
    REG_BG0CNT = BG_CHARBLOCK(0) | BG_SCREENBLOCK(7) | BG_4BPP | BG_SIZE_SMALL;
    DMANow(3, winPal, PALETTE, winPalLen / 2);
    DMANow(3, winTiles, &CHARBLOCK[0], winTilesLen / 2);
    DMANow(3, winMap, &SCREENBLOCK[7], winMapLen / 2);
}

void win() {
    if (BUTTON_PRESSED(BUTTON_START)) {
        goToStart();
    }
}

void goToLose() {
    state = LOSE;

    REG_DISPCTL = MODE0 | BG0_ENABLE;
    // Setup lose background
    REG_BG0CNT = BG_CHARBLOCK(0) | BG_SCREENBLOCK(7) | BG_4BPP | BG_SIZE_SMALL;
    DMANow(3, losePal, PALETTE, losePalLen / 2);
    DMANow(3, loseTiles, &CHARBLOCK[0], loseTilesLen / 2);
    DMANow(3, loseMap, &SCREENBLOCK[7], loseMapLen / 2);
}

void lose() {
    if (BUTTON_PRESSED(BUTTON_START)) {
        goToStart();
    }
}

int main() {
    mgba_open();

    initialize();

    while (1) {
        // Update button variables
        oldButtons = buttons;
        buttons = BUTTONS;

        // State Machine
        switch (state) {
        case START:
            start();
            break;
        case GAME:
            game();
            break;
        case PAUSE:
            pause();
            break;
        case WIN:
            win();
            break;
        case LOSE:
            lose();
            break;
        }
    }
}