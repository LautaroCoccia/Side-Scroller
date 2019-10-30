#ifndef PLAYER_H
#define PLAYER_H
#include "raylib.h"
extern void InitPlayer();
extern void CheckInput();
extern void DrawPlayer();
struct Player
{
	bool isAlive;
	int lifePoints;
	Rectangle player;
};
extern Player P1;
#endif