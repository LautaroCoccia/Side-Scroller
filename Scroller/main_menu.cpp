#include "main_menu.h"

#include "raylib.h"

#include "game_manager.h"
#include "gameplay.h"
bool menu = true;

static const Color normalColorRec = RED;
static void DrawMenu();
static void UpdateMenu();
static void DrawPlayButton();
static void DrawControlsButton();
static  Rectangle buttonPlay = { 280, 170, 80, 40, };
static  Rectangle buttonCredits = { 270, 240, 100, 40 };

void RunMenu()
{
	UpdateMenu();
}
static void UpdateMenu()
{
	DrawMenu();
}

void SetMenuInverse()
{
	menu = !menu;
}
bool GetMenu()
{
	return menu;
}
static void DrawMenu()
{
	DrawText("GLADIUS ", static_cast<int>( screenBaseWidth / 2.5), screenBaseHeight / 5, 30, WHITE);
	DrawPlayButton();
	DrawControlsButton();
	DrawText("v1.0", 600, 400, 20, RAYWHITE);
}
static void DrawPlayButton()
{
	if (GetMouseX() >= buttonPlay.x && GetMouseX() <=(buttonPlay.x+ buttonPlay.width) && GetMouseY() >= buttonPlay.y && GetMouseY() <=(buttonPlay.y+ buttonPlay.height))
	{
		if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
		{
			SetMenuInverse();
			SetPlayInverse();
		}
		DrawRectangle(buttonPlay.x,buttonPlay.y, buttonPlay.width, buttonPlay.height, RAYWHITE);
		DrawText("Play", 300, 180, 20, BLACK);
	}
	else
	{
		DrawRectangle(buttonPlay.x, buttonPlay.y, buttonPlay.width, buttonPlay.height, normalColorRec);
		DrawText("Play", 300, 180, 20, RAYWHITE);
	}
}

static void DrawControlsButton()
{
	if (GetMouseX() >= buttonCredits.x && GetMouseX() <= (buttonCredits.x + buttonCredits.width) && GetMouseY() >= buttonCredits.y && GetMouseY() <= buttonCredits.y + buttonCredits.height)
	{
		if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
		{
			SetMenuInverse();
		}
		DrawRectangle(buttonCredits.x, buttonCredits.y, buttonCredits.width, buttonCredits.height, RAYWHITE);
		DrawText("Contorls", 280, 250, 20, BLACK);
	}
	else
	{
		DrawRectangle(buttonCredits.x, buttonCredits.y, buttonCredits.width, buttonCredits.height , BLUE);
		DrawText("Contorls", 280, 250, 20, RAYWHITE);
	}
}




