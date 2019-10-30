#include "enemy.h"

#include "raylib.h"

#include <time.h>
#include <stdlib.h>

#include <iostream>

using namespace std;
const float initialXEnemyPos = static_cast<float>(GetScreenWidth());
struct enemy 
{
	bool isAlive = false;
	float speed = 0.5f;
	Rectangle enemySpaceship; 
};
enemy spaceship;

void InitEnemy()
{

	if (!spaceship.isAlive)
	{
		spaceship.isAlive = true;
		spaceship.enemySpaceship = { static_cast<float>(GetScreenWidth()), static_cast<float>(GetScreenHeight() / 2), static_cast<float>(15), static_cast<float>(15) };
	}
}
void EnemyMovement()
{
	if (spaceship.enemySpaceship.x + spaceship.enemySpaceship.x >= 0)
	{
		spaceship.enemySpaceship.x -= spaceship.speed;
	}
	else if (spaceship.enemySpaceship.x + spaceship.enemySpaceship.x <= 0)
	{
		

		spaceship.enemySpaceship.y = rand() % (GetScreenHeight() - 15) + 15;
		cout << spaceship.enemySpaceship.y << endl;
		spaceship.enemySpaceship.x = GetScreenWidth();
	}
}
void DrawEnemy()
{
	spaceship.enemySpaceship;
	DrawRectangle(static_cast<float>(spaceship.enemySpaceship.x), static_cast<float>(spaceship.enemySpaceship.y), static_cast<float>(spaceship.enemySpaceship.width), static_cast<float>(spaceship.enemySpaceship.height),BLUE);
}