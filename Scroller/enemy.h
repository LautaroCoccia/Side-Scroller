#ifndef ENEMY_H
#define ENEMY_H
#include "raylib.h"

extern void InitEnemy();
extern void EnemyMovement();
extern void DrawEnemy();
struct enemy
{
	bool isAlive;
	float speed;
	Rectangle enemySpaceship;
};
extern enemy spaceship;
#endif