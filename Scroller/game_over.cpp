#include "game_over.h"

#include "raylib.h"

#include "game_manager.h"
#include "gameplay.h"
#include "main_menu.h"

static bool gameOver = false;
static  Rectangle buttonRetry = { 280, 170, 80, 40, };
static  Rectangle buttonToMenu = { 270, 240, 100, 40 };
static void UpdateGameOver();
static void DrawGameOver();
static void DrawRetryButton();
static void DrawToMenuButton();


void RunGameOver()
{
	UpdateGameOver();
}
static void UpdateGameOver()
{
	DrawGameOver();
}
static void DrawGameOver()
{

	DrawText("GAME OVER ", static_cast<int>(screenBaseWidth / 2.5), screenBaseHeight / 5, 30, WHITE);
	DrawRetryButton();
	DrawToMenuButton();
}

static void DrawRetryButton()
{
	if (GetMouseX() >= buttonRetry.x && GetMouseX() <= (buttonRetry.x + buttonRetry.width) && GetMouseY() >= buttonRetry.y && GetMouseY() <= (buttonRetry.y + buttonRetry.height))
	{
		if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
		{
			SetPlayInverse();
			SetGameOverInverse();
		}
		DrawRectangle(buttonRetry.x, buttonRetry.y, buttonRetry.width, buttonRetry.height, RAYWHITE);
		DrawText("Retry", 300, 180, 20, BLACK);
	}
	else
	{
		DrawRectangle(buttonRetry.x, buttonRetry.y, buttonRetry.width, buttonRetry.height, RED);
		DrawText("Retry", 300, 180, 20, RAYWHITE);
	}
}

static void DrawToMenuButton()
{
	if (GetMouseX() >= buttonToMenu.x && GetMouseX() <= (buttonToMenu.x + buttonToMenu.width) && GetMouseY() >= buttonToMenu.y && GetMouseY() <= buttonToMenu.y + buttonToMenu.height)
	{
		if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
		{
			SetMenuInverse();
			SetGameOverInverse();
		}
		DrawRectangle(buttonToMenu.x, buttonToMenu.y, buttonToMenu.width, buttonToMenu.height, RAYWHITE);
		DrawText("Back to menu", 280, 250, 20, BLACK);
	}
	else
	{
		DrawRectangle(buttonToMenu.x, buttonToMenu.y, buttonToMenu.width, buttonToMenu.height, BLUE);
		DrawText("Back to menu", 280, 250, 20, RAYWHITE);
	}
}
void SetGameOverInverse()
{
	gameOver = !gameOver;
}

bool GetGameOver()
{
	return gameOver;
}