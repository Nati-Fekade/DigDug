#include "game.h"
#include "gba.h"
#include "dig_dug_spritesheet.h"
#include "bgdTiles.h"

#include "print.h"

int shovelTimer;
int hFireTimer;
int vFireTimer;
int rockTimer;


int health;
int enemyCount;

int score;
int possibleScore[5] = {10000, 1000, 100, 10, 1};
int scoreTracker;

OBJ_ATTR shadowOAM[128];
/*
Initializes all possible values for our game
*/
void initializeGame() {
    DMANow(3, dig_dug_spritesheetPal, SPRITEPALETTE, dig_dug_spritesheetPalLen/2);
    DMANow(3, dig_dug_spritesheetTiles, &CHARBLOCK[4], dig_dug_spritesheetTilesLen/2);
    
    hideSprites();

    score = 0;
    health = 3;
    enemyCount = 4;

    initializeScoreNum();
    initializeDirt();
    initializeRock();
    initializeTitular();
    initializeShovel();
    initializeHpookas();
    initializeVpookas();
    initializeHfygars();
    initializeVfygars();

    buttons = BUTTONS;
}
/*
Initializes the score number to be displayed on the top right corner
*/
void initializeScoreNum() {
    for (int i = 0; i < SCORENUM; i++) {
        scoreNum[i].width = 8;
        scoreNum[i].height= 8;
        scoreNum[i].col = 180 + i*10;
        scoreNum[i].row = 8;
        scoreNum[i].aniState = 0;
    }
}
/**
 * Initializes the dirt for the player to dig through
*/
void initializeDirt() {
    u16 tileBorder = 5;
    u16 dirt = 7;

    // Clear out the tilemap
    for (int i = 0; i < 32; i++) {
        for (int j = 0; j < 32; j++) {
            SCREENBLOCK[15].tilemap[OFFSET(j, i, 32)] = 0;
        }
    }

    for (int i = 0; i < GAMEBOARD_HEIGHT; i++) { // Screen Left
        SCREENBLOCK[15].tilemap[OFFSET(0, i, 32)] = tileBorder;
    }
    for (int i = 0; i < GAMEBOARD_HEIGHT; i++) { // Screen Right
        SCREENBLOCK[15].tilemap[OFFSET(GAMEBOARD_WIDTH - 1, i, 32)] = tileBorder;
    }
    for (int i = 0; i < GAMEBOARD_WIDTH; i++) { // Screen Top
        SCREENBLOCK[15].tilemap[OFFSET(i, 0, 32)] = tileBorder;
    }
    for (int i = 0; i < GAMEBOARD_WIDTH; i++) { // Screen Bottom
        SCREENBLOCK[15].tilemap[OFFSET(i, GAMEBOARD_HEIGHT - 1, 32)] = tileBorder;
    }
    for (int i = 1; i < GAMEBOARD_WIDTH - 1; i++) { // DIRT
        for (int j = 3; j < GAMEBOARD_HEIGHT - 1; j++) {
            SCREENBLOCK[15].tilemap[OFFSET(i, j, 32)] = dirt;
        }
    }
    // empty tiles for horizontal pookas and fygars
    for (int i = 3; i < 10; i++) {
        for (int j = 0; j < 2; j++) {
            SCREENBLOCK[15].tilemap[OFFSET(i, 5+j, 32)] = 0;
        }
    }
    for (int i = 18; i < 27; i++) {
        for (int j = 0; j < 2; j++) {
            SCREENBLOCK[15].tilemap[OFFSET(i, 12+j, 32)] = 0;
        }
    }
    // empty tiles for vertical pookas and fygars
    for (int i = 4; i < 11; i++) {
        for (int j = 0; j < 2; j++) {
            SCREENBLOCK[15].tilemap[OFFSET(25+j, i, 32)] = 0;
        }
    }
    for (int i = 10; i < 18; i++) {
        for (int j = 0; j < 2; j++) {
            SCREENBLOCK[15].tilemap[OFFSET(5+j, i, 32)] = 0;
        }
    }
    // empty tile for rock
    SCREENBLOCK[15].tilemap[OFFSET(15, 10, 32)] = 0;
}
/**
 * Initalizes the rock at the middle of the screen
*/
void initializeRock() {
    REG_DISPCTL = MODE0 | SPRITE_ENABLE | BG0_ENABLE;

    rock.width = 8;
    rock.height = 8;
    rock.rdel = 1;
    rock.col = 120;
    rock.row = 80;
    rock.aniCounter = 0;
    rock.curFrame = 0;
    rock.numFrames = 1;
    rock.aniState = 0;
}
/**
 * Initializes the player/titular
*/
void initializeTitular() {
    REG_DISPCTL = MODE0 | SPRITE_ENABLE | BG0_ENABLE;

    titular.width = 8;
    titular.height = 16;
    titular.cdel = 1;
    titular.rdel = 1;
    titular.col = 100;
    titular.row = 1;
    titular.aniCounter = 0;
    titular.curFrame = 0;
    titular.numFrames = 3;
    titular.aniState = SPRITERIGHT;
}
/**
 * Initializes the shovel for the titular
 * Also, I call the air pump as shovel in my implementation
*/
void initializeShovel() {
    REG_DISPCTL = MODE0 | SPRITE_ENABLE | BG0_ENABLE;

    shovel.width = 16;
    shovel.height = 8;
    shovel.col = titular.col;
    shovel.row = titular.row;
    shovel.aniCounter = 0;
    shovel.curFrame = 0;
    shovel.numFrames = 1;
}
/**
 * Initializes the horizontal moving POOKAS
*/
void initializeHpookas() {
    REG_DISPCTL = MODE0 | SPRITE_ENABLE | BG0_ENABLE;

    pookas.width = 8;
    pookas.height = 8;
    pookas.col = 30;
    pookas.row = 41;
    pookas.cdel = 1;
    pookas.rdel = 1;
    pookas.aniCounter = 0;
    pookas.curFrame = 0;
    pookas.numFrames = 2;
    pookas.aniState = SPRITERIGHT;

    pookas.active = 1;
}
/**
 * Initializes the vertical moving POOKAS
*/
void initializeVpookas() {
    REG_DISPCTL = MODE0 | SPRITE_ENABLE | BG0_ENABLE;

    vPookas.width = 8;
    vPookas.height = 8;
    vPookas.col = 201;
    vPookas.row = 60;
    vPookas.cdel = 1;
    vPookas.rdel = 1;
    vPookas.aniCounter = 0;
    vPookas.curFrame = 0;
    vPookas.numFrames = 2;
    vPookas.aniState = SPRITEBACK;

    vPookas.active = 1;
}
/**
 * Initializes the horizontal moving FYGARS
*/
void initializeHfygars() {
    REG_DISPCTL = MODE0 | SPRITE_ENABLE | BG0_ENABLE;

    fygars.width = 8;
    fygars.height = 8;
    fygars.col = 152;
    fygars.row = 97;
    fygars.cdel = 1;
    fygars.rdel = 1;
    fygars.aniCounter = 0;
    fygars.curFrame = 0;
    fygars.numFrames = 2;
    fygars.aniState = SPRITERIGHT;

    fygars.active = 1;
}
/**
 * Initializes the vertical moving FYGARS
*/
void initializeVfygars() {
    REG_DISPCTL = MODE0 | SPRITE_ENABLE | BG0_ENABLE;

    vFygars.width = 8;
    vFygars.height = 8;
    vFygars.col = 40;
    vFygars.row = 120;
    vFygars.cdel = 1;
    vFygars.rdel = 1;
    vFygars.aniCounter = 0;
    vFygars.curFrame = 0;
    vFygars.numFrames = 2;
    vFygars.aniState = SPRITEFRONT;

    vFygars.active = 1;
}
/**
 * UPDATES the whole game
*/
void updateGame() {
    updateHealth();
    updateScore();
    updateScoreNum();
    updateTitular();
    updateRock();
    updateHpookas(&pookas);
    updateVpookas(&vPookas);
    updateHfygars(&fygars);
    updateVfygars(&vFygars);
    updateShovel(&titular, &shovel);
    updateHFire(&fygars);
    updateVFire(&vFygars);
}
/**
 * takes in col and row index and checkes whether the tile at that position is filled or not
*/
int tileIsFilled(int col, int row) {
    return SCREENBLOCK[15].tilemap[OFFSET(col, row, 32)];
}
/**
 * Updates the heart sprite
 * Decreases as the player gets hit
*/
void updateHealth() {
    shadowOAM[30].attr0 = 8 | ATTR0_4BPP | ATTR0_SQUARE;
    shadowOAM[30].attr1 = 10 | ATTR1_TINY;
    shadowOAM[30].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(11, 15);

    shadowOAM[31].attr0 = 8 | ATTR0_4BPP | ATTR0_SQUARE;
    shadowOAM[31].attr1 = 20 | ATTR1_TINY;
    shadowOAM[31].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(11, 15);

    shadowOAM[32].attr0 = 8 | ATTR0_4BPP | ATTR0_SQUARE;
    shadowOAM[32].attr1 = 30 | ATTR1_TINY;
    shadowOAM[32].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(11, 15);

    if (health == 2) {
        shadowOAM[32].attr0 = ATTR0_HIDE;
    }
    if (health == 1) {
        shadowOAM[31].attr0 = ATTR0_HIDE;
        shadowOAM[32].attr0 = ATTR0_HIDE;
    }
    if (health == 0) {
        shadowOAM[30].attr0 = ATTR0_HIDE;
        shadowOAM[31].attr0 = ATTR0_HIDE;
        shadowOAM[32].attr0 = ATTR0_HIDE;
    }
}
/**
 * Displays the word "SCORE"
*/
void updateScore() {
    shadowOAM[33].attr0 = 8 | ATTR0_4BPP | ATTR0_WIDE;
    shadowOAM[33].attr1 = 140 | ATTR1_SMALL;
    shadowOAM[33].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(0, 15);
}
/**
 * Updates the score value sprite as the player accomplishes certain tasks
*/
void updateScoreNum() {
    scoreTracker = score;
    for (int i = 0; i < SCORENUM; i++) {
        scoreNum[i].aniState = scoreTracker/possibleScore[i];
        scoreTracker = score%possibleScore[i];
            
        shadowOAM[40 + i].attr0 = scoreNum[i].row | ATTR0_4BPP | ATTR0_SQUARE;
        shadowOAM[40 + i].attr1 = scoreNum[i].col | ATTR1_TINY;
        shadowOAM[40 + i].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(0+scoreNum[i].aniState, 17);
    }

}
/**
 * Updates the titular's position and animates it as well
*/
void updateTitular() {
    // if titular is in motion, keep its state
    if (titular.aniState != SPRITEIDLE) {
        titular.prevAniState = titular.aniState;
        titular.aniState = SPRITEIDLE;
    }
    if(titular.aniCounter % 10 == 0) {
        if (titular.curFrame < titular.numFrames) {
            titular.curFrame = (titular.curFrame + 1) % titular.numFrames;
        } else {
            titular.curFrame = 0;
        }
    }
    // Control movement and change animation state
    if(BUTTON_HELD(BUTTON_UP)) {
        if (titular.row > 0) {
            titular.aniState = SPRITEFRONT;
            titular.row--;
            SCREENBLOCK[15].tilemap[OFFSET((titular.col + titular.width)/8, (titular.row + titular.height)/8, 32)] = 0;
        }
    }
    if(BUTTON_HELD(BUTTON_DOWN)) {
        if (titular.row + titular.height < SCREENHEIGHT - 15) {
            titular.aniState = SPRITEBACK;
            titular.row++;
            SCREENBLOCK[15].tilemap[OFFSET((titular.col + titular.width)/8, (titular.row + titular.height)/8, 32)] = 0;
        }
    }
    if(BUTTON_HELD(BUTTON_LEFT)) {
        if (titular.col > 1) {
            titular.aniState = SPRITELEFT;
            titular.col--;
            SCREENBLOCK[15].tilemap[OFFSET((titular.col + titular.width)/8, (titular.row + titular.height)/8, 32)] = 0;
        }
    }
    if(BUTTON_HELD(BUTTON_RIGHT)) {
        if (titular.col + titular.width < SCREENWIDTH - 15) {
            titular.aniState = SPRITERIGHT;
            titular.col++;
            SCREENBLOCK[15].tilemap[OFFSET((titular.col + titular.width)/8, (titular.row + titular.height)/8, 32)] = 0;
        }
    }
    
    if (BUTTON_PRESSED(BUTTON_A)) {
        shoot();
    }

    // if titular is stoping, whatever state it is in, keep it.
    if (titular.aniState == SPRITEIDLE) {
        titular.curFrame = 0;
        titular.aniState = titular.prevAniState;
    } else {
        titular.aniCounter++;
    }

    shadowOAM[0].attr0 = titular.row | ATTR0_4BPP | ATTR0_TALL;
    shadowOAM[0].attr1 = titular.col | ATTR1_MEDIUM;
    shadowOAM[0].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(titular.aniState*2, titular.curFrame*4);
}
/**
 * Animates the shovel, checks for collision between the shovel and enemies and updates the value of score as necessary
*/
void updateShovel(ANISPRITE* titular, ANISPRITE* shovel) {
    shovel->row = titular->row;
    shovel->col = titular->col;

    if (shovelTimer > 0) {
        if (titular->aniState == SPRITEFRONT) {
            shadowOAM[10].attr0 = (shovel->row - (shovel->height * 3)) | ATTR0_4BPP | ATTR0_TALL;
            shadowOAM[10].attr1 = (shovel->col + (shovel->width)/2) | ATTR1_SMALL;
            shadowOAM[10].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(12, 0);
            //mgba_printf("shoot front");
        }
        if (titular->aniState == SPRITEBACK) {
            shadowOAM[11].attr0 = (shovel->row + (shovel->height * 3)) | ATTR0_4BPP | ATTR0_TALL;
            shadowOAM[11].attr1 = (shovel->col + (shovel->width)/2) | ATTR1_SMALL;
            shadowOAM[11].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(13, 0);
            //mgba_printf("shoot back");
        }
        if (titular->aniState == SPRITERIGHT) {
            shadowOAM[12].attr0 = (shovel->row + (shovel->height * 2)) | ATTR0_4BPP | ATTR0_WIDE;
            shadowOAM[12].attr1 = (shovel->col + (shovel->width)) | ATTR1_SMALL;
            shadowOAM[12].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(8, 0);
            //mgba_printf("shoot right");
        }
        if (titular->aniState == SPRITELEFT) {
            shadowOAM[13].attr0 = (shovel->row + (shovel->height * 2)) | ATTR0_4BPP | ATTR0_WIDE;
            shadowOAM[13].attr1 = (shovel->col - (shovel->width + 8)) | ATTR1_SMALL;
            shadowOAM[13].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(8, 1);
            //mgba_printf("shoot left");
        }
        int x1 = shovel->col - (shovel->width + 4); // when shooting towards left
        int y1 = shovel->row + (shovel->height * 2); // when shooting towards left
        int x2 = shovel->col + (shovel->width + 8); // when shooting towards right
        int y2 = shovel->row + (shovel->height * 2); // when shooting towards right
        int x3 = shovel->col + (shovel->width)/2; // when shooting towards up
        int y3 = shovel->row - (shovel->height * 2); // when shooting towards up
        int x4 = shovel->col + (shovel->width)/2; // when shooting towards down
        int y4 = shovel->row + (shovel->height * 4); // when shooting towards down

        // checks for collision against horizontal pookas
        if (collision(x1, y1, shovel->width, shovel->height, (pookas.col), (pookas.row), pookas.width, pookas.height)) {
            mgba_printf("collision bt Hpookas and shovel LEFT");
            pookas.active = 0;
            score += 250;
            enemyCount--;
        } else if (collision(x2, y2, shovel->width, shovel->height, (pookas.col), (pookas.row), pookas.width, pookas.height)) {
            mgba_printf("collision bt Hpookas and shovel RIGHT");
            pookas.active = 0;
            score += 250;
            enemyCount--;
        } else if (collision(x3, y3, shovel->width, shovel->height, (pookas.col), (pookas.row), pookas.width, pookas.height)) {
            mgba_printf("collision bt Hpookas and shovel UP");
            pookas.active = 0;
            score += 250;
            enemyCount--;
        } else if (collision(x4, y4, shovel->width, shovel->height, (pookas.col), (pookas.row), pookas.width, pookas.height)) {
            mgba_printf("collision bt Hpookas and shovel DOWN");
            pookas.active = 0;
            score += 250;
            enemyCount--;
        }
        // checks for collision against vertical pookas
        if (collision(x1, y1, shovel->width, shovel->height, (vPookas.col), (vPookas.row), vPookas.width, vPookas.height)) {
            mgba_printf("collision bt Vpookas and shovel LEFT");
            vPookas.active = 0;
            score += 250;
            enemyCount--;
        } else if (collision(x2, y2, shovel->width, shovel->height, (vPookas.col), (vPookas.row), vPookas.width, vPookas.height)) {
            mgba_printf("collision bt Vpookas and shovel RIGHT");
            vPookas.active = 0;
            score += 250;
            enemyCount--;
        } else if (collision(x3, y3, shovel->width, shovel->height, (vPookas.col), (vPookas.row), vPookas.width, vPookas.height)) {
            mgba_printf("collision bt Vpookas and shovel UP");
            vPookas.active = 0;
            score += 250;
            enemyCount--;
        } else if (collision(x4, y4, shovel->width, shovel->height, (vPookas.col), (vPookas.row), vPookas.width, vPookas.height)) {
            mgba_printf("collision bt Vpookas and shovel DOWN");
            vPookas.active = 0;
            score += 250;
            enemyCount--;
        }
        // checks for collision against horizontal fygars
        if (collision(x1, y1, shovel->width, shovel->height, (fygars.col), (fygars.row), fygars.width, fygars.height)) {
            mgba_printf("collision bt fygars and shovel LEFT");
            fygars.active = 0;
            score += 500;
            enemyCount--;
        } else if (collision(x2, y2, shovel->width, shovel->height, (fygars.col), (fygars.row), fygars.width, fygars.height)) {
            mgba_printf("collision bt fygars and shovel RIGHT");
            fygars.active = 0;
            score += 500;
            enemyCount--;
        } else if (collision(x3, y3, shovel->width, shovel->height, (fygars.col), (fygars.row), fygars.width, fygars.height)) {
            mgba_printf("collision bt fygars and shovel UP");
            fygars.active = 0;
            score += 500;
            enemyCount--;
        } else if (collision(x4, y4, shovel->width, shovel->height, (fygars.col), (fygars.row), fygars.width, fygars.height)) {
            mgba_printf("collision bt fygars and shovel DOWN");
            fygars.active = 0;
            score += 500;
            enemyCount--;
        }
        // checks for collision against vertical fygars
        if (collision(x1, y1, shovel->width, shovel->height, (vFygars.col), (vFygars.row), vFygars.width, vFygars.height)) {
            mgba_printf("collision bt vFygars and shovel LEFT");
            vFygars.active = 0;
            score += 500;
            enemyCount--;
        } else if (collision(x2, y2, shovel->width, shovel->height, (vFygars.col), (vFygars.row), vFygars.width, vFygars.height)) {
            mgba_printf("collision bt vFygars and shovel RIGHT");
            vFygars.active = 0;
            score += 500;
            enemyCount--;
        } else if (collision(x3, y3, shovel->width, shovel->height, (vFygars.col), (vFygars.row), vFygars.width, vFygars.height)) {
            mgba_printf("collision bt vFygars and shovel UP");
            vFygars.active = 0;
            score += 500;
            enemyCount--;
        } else if (collision(x4, y4, shovel->width, shovel->height, (vFygars.col), (vFygars.row), vFygars.width, vFygars.height)) {
            mgba_printf("collision bt vFygars and shovel DOWN");
            vFygars.active = 0;
            score += 500;
            enemyCount--;
        }

        shovelTimer--;
    } else {
        shadowOAM[10].attr0 = ATTR0_HIDE;
        shadowOAM[11].attr0 = ATTR0_HIDE;
        shadowOAM[12].attr0 = ATTR0_HIDE;
        shadowOAM[13].attr0 = ATTR0_HIDE;
    }
}
// initialzes shovel timer
void shoot() {
    shovelTimer = 20;
}
// initialzes the timer for horizontal fygars
void hFire() {
    hFireTimer = 10;
}
// initalizes the timer for vertical fygars
void vFire() {
    vFireTimer = 10;
}
/**
 * updates the rock position and kills the titular and enemies if the rock falls on them
*/
void updateRock() {
    if (!tileIsFilled(rock.col/8, rock.row/8 + 1)) {
        rock.row += rock.rdel;
        if (collision(rock.col, rock.row, rock.width, rock.height, titular.col, titular.row, titular.width, titular.height)) {
            mgba_printf("titular collision with rock");
            titular.col = 100;
            titular.row = 1;
            health--;
        } else if (collision(rock.col, rock.row, rock.width, rock.height, pookas.col, pookas.row, pookas.width, pookas.height)) {
            mgba_printf("pookas collision with rock");
            pookas.active = 0;
            score += 1000;
            enemyCount--;

        } else if (collision(rock.col, rock.row, rock.width, rock.height, vPookas.col, vPookas.row, vPookas.width, vPookas.height)) {
            mgba_printf("vpookas collision with rock");
            vPookas.active = 0;
            score += 1000;
            enemyCount--;
        } else if (collision(rock.col, rock.row, rock.width, rock.height, fygars.col, fygars.row, fygars.width, fygars.height)) {
            mgba_printf("fygars collision with rock");
            fygars.active = 0;
            score += 1000;
            enemyCount--;
        } else if (collision(rock.col, rock.row, rock.width, rock.height, vFygars.col, vFygars.row, vFygars.width, vFygars.height)) {
            mgba_printf("vFygars collision with rock");
            vFygars.active = 0;
            score += 1000;
            enemyCount--;
        }
    }

    shadowOAM[1].attr0 = rock.row | ATTR0_4BPP | ATTR0_SQUARE;
    shadowOAM[1].attr1 = rock.col | ATTR1_TINY;
    shadowOAM[1].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(14, 0);
}
/**
 * Updates the horizontal pooka's position, and its collision with player
*/
void updateHpookas(ANISPRITE* pookas) {
    if (pookas->active) {
        if (tileIsFilled((pookas->col + pookas->width)/8 - 1, pookas->row/8)) {
            pookas->cdel *= -1;
        }
        pookas->col += pookas->cdel;
        pookas->aniCounter++;
        if (pookas->aniCounter == 20) {
            pookas->aniCounter = 0;
            pookas->curFrame = (pookas->curFrame + 1) % 2;
        }

        shadowOAM[2].attr0 = pookas->row | ATTR0_4BPP | ATTR0_SQUARE;
        shadowOAM[2].attr1 = pookas->col | ATTR1_SMALL;
        shadowOAM[2].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(20 - pookas->cdel, pookas->curFrame*2);
    } else {
        shadowOAM[2].attr0 = ATTR0_HIDE;
        pookas->cdel = 0;
        pookas->col = 0;
    }

    if (collision(pookas->col, pookas->row, pookas->width, pookas->height, titular.col+8, titular.row+8, titular.width, titular.height)) {
        mgba_printf("collision between player and Hpooka");
        titular.col = 100;
        titular.row = 1;
        health--;
    }
}
/**
 * Updates the vertical pooka's position, and its collision with player
*/
void updateVpookas(ANISPRITE* vPookas) {
    if (vPookas->active) {
        if (tileIsFilled(vPookas->col/8, (vPookas->row + vPookas->height)/8)) {
            vPookas->rdel *= -1;
        }
        vPookas->row += vPookas->rdel;
        vPookas->aniCounter++;
        if (vPookas->aniCounter == 20) {
            vPookas->aniCounter = 0;
            vPookas->curFrame = (vPookas->curFrame + 1) % 2;
        }
        shadowOAM[20].attr0 = vPookas->row | ATTR0_4BPP | ATTR0_SQUARE;
        shadowOAM[20].attr1 = vPookas->col | ATTR1_SMALL;
        shadowOAM[20].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(16 - vPookas->rdel, vPookas->curFrame*2);
    } else {
        shadowOAM[20].attr0 = ATTR0_HIDE;
        vPookas->rdel = 0;
        vPookas->col = 0;
    }

    if (collision(vPookas->col, vPookas->row, vPookas->width, vPookas->height, titular.col+8, titular.row+8, titular.width, titular.height)) {
        mgba_printf("collision between player and vPookas");
        titular.col = 100;
        titular.row = 1;
        health--;
    }  
}
/**
 * Updates the horizontal fygar's position, and its collision with player
*/
void updateHfygars(ANISPRITE* fygars) {
    if (fygars->active) {
        if (tileIsFilled((fygars->col + fygars->width)/8, fygars->row/8)) {
            fygars->cdel *= -1;
        }
        fygars->col += fygars->cdel;
        fygars->aniCounter++;
        if (fygars->aniCounter == 20) {
            fygars->aniCounter = 0;
            fygars->curFrame = (fygars->curFrame + 1) % 2;
        }
        if (fygars->cdel > 0) {
            fygars->aniState = SPRITERIGHT;
        } else {
            fygars->aniState = SPRITELEFT;
        }
        shadowOAM[3].attr0 = fygars->row | ATTR0_4BPP | ATTR0_SQUARE;
        shadowOAM[3].attr1 = fygars->col | ATTR1_SMALL;
        shadowOAM[3].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(20 - fygars->cdel, 7 + fygars->curFrame*2);
    } else {
        shadowOAM[3].attr0 = ATTR0_HIDE;
        fygars->cdel = 0;
        fygars->col = 0;
    }

    if (collision(fygars->col-20, fygars->row, fygars->width, fygars->height, titular.col+8, titular.row+8, titular.width, titular.height) ||
        collision(fygars->col+36, fygars->row, fygars->width, fygars->height, titular.col+8, titular.row+8, titular.width, titular.height)) {
        mgba_printf("collision between player and fygars");
        hFire();
    }
}
/**
 * Updates the vertical fygar's position, and its collision with player
*/
void updateVfygars(ANISPRITE* vFygars) {
    if (vFygars->active) {
        if (tileIsFilled(vFygars->col/8, (vFygars->row + vFygars->height)/8)) {
            vFygars->rdel *= -1;
        }
        vFygars->row += vFygars->rdel;
        vFygars->aniCounter++;
        if (vFygars->aniCounter == 20) {
            vFygars->aniCounter = 0;
            vFygars->curFrame = (vFygars->curFrame + 1) % 2;
        }
        if (vFygars->rdel > 0) {
            vFygars->aniState = SPRITEBACK;
        } else {
            vFygars->aniState = SPRITEFRONT;
        }
        shadowOAM[21].attr0 = vFygars->row | ATTR0_4BPP | ATTR0_SQUARE;
        shadowOAM[21].attr1 = vFygars->col | ATTR1_SMALL;
        shadowOAM[21].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(16 - vFygars->rdel, 7 + vFygars->curFrame*2);
    } else {
        shadowOAM[21].attr0 = ATTR0_HIDE;
        vFygars->rdel = 0;
        vFygars->col = 0;
    }

    if (collision(vFygars->col, vFygars->row-20, vFygars->width, vFygars->height, titular.col, titular.row+8, titular.width, titular.height) || 
        collision(vFygars->col, vFygars->row+20, vFygars->width, vFygars->height, titular.col, titular.row+8, titular.width, titular.height)) {
        mgba_printf("collision between player and vfygars");
        vFire();
    }
}
/**
 * updates the vertical fire for fygars and its collision with player
*/
void updateVFire(ANISPRITE* vFygars) {
    if (vFireTimer > 0) {
        if (vFygars->aniState == SPRITEFRONT) {
            shadowOAM[14].attr0 = (vFygars->row - (vFygars->height + 16)) | ATTR0_4BPP | ATTR0_TALL;
            shadowOAM[14].attr1 = (vFygars->col - (vFygars->width)) | ATTR1_MEDIUM;
            shadowOAM[14].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(9, 8);
        }
        if (vFygars->aniState == SPRITEBACK) {
            shadowOAM[15].attr0 = (vFygars->row + 4) | ATTR0_4BPP | ATTR0_TALL;
            shadowOAM[15].attr1 = (vFygars->col + 2) | ATTR1_MEDIUM;
            shadowOAM[15].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(11, 8);
        }
        vFireTimer--;
    } else {
        shadowOAM[14].attr0 = ATTR0_HIDE;
        shadowOAM[15].attr0 = ATTR0_HIDE;
    }
    int colA = vFygars->col - (vFygars->width)/2;
    int rowA = vFygars->row - (vFygars->height + 8);
    int colB = vFygars->col;
    int rowB = vFygars->row;
    if (collision(colA, rowA, vFygars->width, vFygars->height, titular.col, titular.row, titular.width, titular.height) || 
        collision(colB, rowB, vFygars->width, vFygars->height, titular.col, titular.row, titular.width, titular.height)) {
        mgba_printf(" collision vfire and titular");
        titular.col = 100;
        titular.row = 1;
        health--;
    }
}
/**
 * updates the horizontal fire for fygars and its collision with player
*/
void updateHFire(ANISPRITE* fygars) {
    if (hFireTimer > 0) {
        if (fygars->aniState == SPRITERIGHT) {
            shadowOAM[16].attr0 = (fygars->row - (fygars->height)/2) | ATTR0_4BPP | ATTR0_WIDE;
            shadowOAM[16].attr1 = (fygars->col + (fygars->width + 8)/2) | ATTR1_MEDIUM;
            shadowOAM[16].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(24, 9);
        }
        if (fygars->aniState == SPRITELEFT) {
            shadowOAM[17].attr0 = (fygars->row - (fygars->height)) | ATTR0_4BPP | ATTR0_WIDE;
            shadowOAM[17].attr1 = (fygars->col - (fygars->width + 16)) | ATTR1_MEDIUM;
            shadowOAM[17].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(28, 9);
        }
        hFireTimer--;
    } else {
        shadowOAM[16].attr0 = ATTR0_HIDE;
        shadowOAM[17].attr0 = ATTR0_HIDE;
    }
    int colC = fygars->col + (fygars->width + 8)/2;
    int rowC = fygars->row - (fygars->height)/2;
    int colD = fygars->col - (fygars->width + 16);
    int rowD = fygars->row - (fygars->height);

    if (collision(colC, rowC, fygars->width, fygars->height, titular.col, titular.row, titular.width, titular.height) ||
        collision(colD, rowD, fygars->width, fygars->height, titular.col, titular.row, titular.width, titular.height)) {
        mgba_printf("hfire and titular");
        titular.col = 100;
        titular.row = 1;
        health--;
    }
}
// Copies the shadowOAM to OAM :)
void drawGame() {
    DMANow(3, shadowOAM, OAM, 512);
}