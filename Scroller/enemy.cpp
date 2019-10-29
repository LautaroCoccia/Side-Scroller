#include "enemy.h"

#include <time.h>
#include <stdlib.h>
#include "raylib.h"

const float initialXEnemyPos = static_cast<float>(GetScreenWidth());
struct enemy 
{
	bool isAlive = false;
	float speed = 0.1f;
	Rectangle enemySpaceship; 
};
enemy spaceship;

void InitEnemy()
{

	if (!spaceship.isAlive)
	{
		spaceship.isAlive = true;
		spaceship.enemySpaceship = { static_cast<float>(initialXEnemyPos), static_cast<float>(GetScreenHeight() / 2), static_cast<float>(10), static_cast<float>(10) };
	}
}
void EnemyMovement()
{
	if (spaceship.enemySpaceship.x + spaceship.enemySpaceship.x >= 0)
	{
		spaceship.enemySpaceship.x += spaceship.speed;
	}
	else if (spaceship.enemySpaceship.x + spaceship.enemySpaceship.x <= 0)
	{
		spaceship.enemySpaceship.x = initialXEnemyPos;
	}
}
void DrawEnemy()
{
	spaceship.enemySpaceship;
	DrawRectangle(static_cast<float>(spaceship.enemySpaceship.x), static_cast<float>(spaceship.enemySpaceship.y), static_cast<float>(spaceship.enemySpaceship.width), static_cast<float>(spaceship.enemySpaceship.height),BLUE);
}