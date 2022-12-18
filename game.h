typedef struct {
    int row;
    int col;
    int rdel;
    int cdel;
    int width;
    int height;
    int aniCounter;
    int aniState;
    int prevAniState;
    int curFrame;
    int numFrames;

    int active;
} ANISPRITE;

ANISPRITE titular;
ANISPRITE shovel;
ANISPRITE rock;
ANISPRITE pookas;
ANISPRITE vPookas;
ANISPRITE fygars;
ANISPRITE vFygars;

#define SCORENUM 5
ANISPRITE scoreNum[SCORENUM];

enum {SPRITEFRONT, SPRITEBACK, SPRITERIGHT, SPRITELEFT, SPRITEIDLE};

#define GAMEBOARD_WIDTH 30
#define GAMEBOARD_HEIGHT 20

// Important GLOBAL VARIABLES
extern int health;
extern int enemyCount;
extern int score;

// Function prototypes
void initializeGame();
void initializeDirt();
void initializeRock();
void initializeTitular();
void initializeShovel();
void initializeHpookas();
void initializeVpookas();
void initializeHfygars();
void initializeVfygars();
void initializeScoreNum();

void updateGame();
void updateHealth();
void updateScore();
void updateScoreNum();
void updateTitular();
void updateRock();
void shoot();
void updateShovel(ANISPRITE* titular, ANISPRITE* shovel);
void updateHpookas(ANISPRITE* pookas);
void updateVpookas(ANISPRITE* vPookas);
void updateHfygars(ANISPRITE* fygars);
void updateVfygars(ANISPRITE* vFygars);
void updateHFire(ANISPRITE* fygars);
void updateVFire(ANISPRITE* vFygars);
void hFire();
void vFire();

int tileIsFilled(int col, int row);

void drawGame();
