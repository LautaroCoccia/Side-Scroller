#include "game_manager.h"

#include "raylib.h"

#include "main_menu.h"
#include "gameplay.h"

const int screenBaseWidth = 640;
const int screenBaseHeight = 400;

static void MainGameLoop();

void InitializeWindowNMainLoop()
{
	InitWindow(screenBaseWidth, screenBaseHeight, "Gladius.exe");
	MainGameLoop();
}

static void MainGameLoop()
{
	while (!WindowShouldClose() || IsKeyPressed(KEY_ESCAPE))
	{

		ClearBackground(BLACK);
		BeginDrawing();
		if (GetMenu())
		{
			RunMenu();
		}
		else if (GetPlay())
		{
			UpdateGame();
		}
		else if (!GetPlay())
		{

		}

		EndDrawing();
	}
}

