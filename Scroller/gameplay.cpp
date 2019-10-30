#include "gameplay.h"

#include "raylib.h"

#include "game_manager.h"
#include "player.h"
#include "enemy.h"

bool play = false;
static char pauseKey = 'P';
static bool pause = false;
static void PauseGame();
static void SetPauseInverse();
static bool GetPause();

void UpdateGame()
{
	InitPlayer();
	PauseGame();
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
	if (IsKeyPressed(pauseKey))
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
