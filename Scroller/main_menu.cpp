#include "main_menu.h"

#include "raylib.h"

#include "game_manager.h"

bool menu = true;

static void DrawMenu();

void UpdateMenu()
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
}
