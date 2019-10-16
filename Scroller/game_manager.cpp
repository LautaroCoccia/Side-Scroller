#include "game_manager.h"

#include "raylib.h"

static void MainGameLoop();
static void MainDraw();

void InitializeWindowNMainLoop()
{
	InitWindow(800, 600, "Gladius.exe");
	MainGameLoop();
}

static void MainGameLoop()
{
	while (!WindowShouldClose() || IsKeyPressed(KEY_ESCAPE))
	{
		MainDraw();
	}
}

static void MainDraw()
{
	BeginDrawing();
	ClearBackground(BLACK);
	DrawText("new window ", 800 / 2.5, 450 / 2.5, 20, WHITE);
	EndDrawing();
}