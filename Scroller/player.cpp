#include "player.h"

#include "raylib.h"


Player P1;

void InitPlayer()
{
	if (!P1.isAlive)
	{
		P1.isAlive = true;
		P1.lifePoints = 3;
		P1.player = { 20, 200, 40, 15, WHITE };
	}
}

void CheckInput()
{
	if (IsKeyDown(KEY_S))
	{
		if (P1.player.y<= GetScreenHeight() - P1.player.height)
		{
			P1.player.y += 0.5;
		}
	}
	else if (IsKeyDown(KEY_W))
	{
		if (P1.player.y >= P1.player.height)
		{
			P1.player.y -= 0.5;
		}
		
	}
}
void DrawPlayer()
{
	DrawRectangle(static_cast<int>(P1.player.x), static_cast<int>(P1.player.y), static_cast<int>(P1.player.width) , static_cast<int>(P1.player.height), RAYWHITE);
}