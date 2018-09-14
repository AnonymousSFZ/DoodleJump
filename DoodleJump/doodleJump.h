#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <time.h>
#include <math.h>
#include <direct.h>
#include <string.h>

#define TITLE_TEXTSIZE  40
#define TITLE_MARGIN    10
#define SIDEBAR_WIDTH   200

#define PLAYER_WIDTH    60
#define PLAYER_HEIGHT   62
#define BRICK_WIDTH     50
#define BRICK_HEIGHT    15

#define MAX_HEIGHT      200

extern PIMAGE scene;

typedef struct
{
    int x;
    int y;
    bool isInMap;
}BRICK;

typedef struct
{
    float x;
    float y;
    float vertSpeed;
    float horiSpeed;
    PIMAGE img;
}PLAYER;

void welcomePage();
void initScene();
void updateScene();
void reset();

void initBrick();
void initPlayer();
void updatePlayer();
bool jumpCheck();

void getPath(char*, char*);
void resizeImg(PIMAGE &, int, int);


