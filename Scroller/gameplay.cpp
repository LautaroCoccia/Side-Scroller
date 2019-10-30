#include "gameplay.h"

#include "raylib.h"

#include "game_manager.h"
#include "player.h"
#include "enemy.h"
#include "game_over.h"

#include <iostream>
using namespace std;

bool play = false;
static bool pause = false;
static void UpdateGame();
static void PauseGame();
static void SetPauseInverse();
static bool GetPause();
static void CheckPlayerEnemyCollision();

void RunGameplay()
{
	UpdateGame();
}
static void UpdateGame()
{
	InitPlayer();
	PauseGame();
	CheckPlayerEnemyCollision();
	if (!GetPause())
	{	
		InitEnemy();
		CheckInput();
		EnemyMovement();
		
	}
	else if (GetPause())
	{
		DrawText("PAUSE ", static_cast<int>(screenBaseWidth / 2.35), screenBaseHeight / 3, 30, WHITE);
	}
	DrawPlayer();
	DrawEnemy();
	
}
void SetPlayInverse()
{
	play = !play;
}

bool GetPlay()
{
	return play;
}
static void PauseGame()
{
	if (IsKeyPressed(KEY_P))
	{
		SetPauseInverse();
	}
}
static void SetPauseInverse()
{
	pause = !pause;
}
static bool GetPause()
{
	return pause;
}
static void CheckPlayerEnemyCollision()
{
	//CheckCollisionRecs(P1.player, spaceship.enemySpaceship)
	if (IsKeyPressed(KEY_ENTER))
	{
		cout << "collision" << endl;
		SetGameOverInverse();
		SetPlayInverse();
	}
}
