#include "raylib.h"
#include "config.h"
#include "player.h"

int main() {
	InitWindow(winConfig::width, winConfig::height, "RaylibTest_0 - My first application!");
	SetTargetFPS(winConfig::fps);

	Player p;

	while (!WindowShouldClose()) {

		BeginDrawing();

		ClearBackground(DARKGRAY);

		DrawPoly(p.pos, 4, p.radius, 45, RED);
		p.update();

		DrawText("\"My first ever raylib application!!\" \n - carlos, the terrible.", 20, 20, 20, LIGHTGRAY);
		DrawText(TextFormat("Position: (%.2f, %.2f)", p.pos.x, p.pos.y), 20, 75, 20, RAYWHITE);
		

		EndDrawing();

	}

	CloseWindow();

	return 0;
}