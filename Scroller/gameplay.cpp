#include "gameplay.h"

#include "raylib.h"

#include "game_manager.h"
#include "player.h"

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
	if (GetPause())
	{	
		DrawText("PAUSE ", static_cast<int>(screenBaseWidth / 2.35), screenBaseHeight / 3, 30, WHITE);
	}
	DrawPlayer();
	DrawText("PLAYING ", static_cast<int>(screenBaseWidth / 2.5), screenBaseHeight / 5, 30, WHITE);
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
