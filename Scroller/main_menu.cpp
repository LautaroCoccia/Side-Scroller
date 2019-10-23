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
	if (GetMouseX() >= 358 && GetMouseX() <= 358 + 80 && GetMouseY() >= 170 && GetMouseY() <= 170 + 40)
	{
		if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
		{
			SetMenuInverse();
			SetPlayInverse();
		}
		DrawRectangle(358, 170, 80, 40, RAYWHITE);
		DrawText("Play", 375, 180, 20, BLACK);
	}
	else
	{
		DrawRectangle(358, 170, 80, 40, normalColorRec);
		DrawText("Play", 375, 180, 20, RAYWHITE);
	}
}

static void DrawControlsButton()
{
	if (GetMouseX() >= 350 && GetMouseX() <= 345 + 100 && GetMouseY() >= 240 && GetMouseY() <= 240 + 40)
	{
		if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
		{
			SetMenuInverse();
		}
		DrawRectangle(350, 240, 100, 40, RAYWHITE);
		DrawText("Contorls", 355, 250, 20, BLACK);
	}
	else
	{
		DrawRectangle(350, 240, 100, 40, BLUE);
		DrawText("Contorls", 355, 250, 20, RAYWHITE);
	}
}




