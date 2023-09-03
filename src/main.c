#define RAYGUI_IMPLEMENTATION
#include <stdio.h>
#include <stdlib.h>
#include <raylib.h>
#include "raygui.h"

int main(void) {
  const int screenWidth = 900;
  const int screenHeight = 500;
  int height = 100;

  InitWindow(screenWidth, screenHeight, "Projectile Motion Simulator");

  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);
    DrawText("Projectile Motion Simulator", 100, 10, 25, WHITE);
    DrawLine(590, 0, 590, GetScreenHeight(), Fade(LIGHTGRAY, 0.6f));
    DrawRectangle(590, 0, GetScreenWidth() - 500, GetScreenHeight(), Fade(DARKGRAY, 0.3f));
    GuiSliderBar((Rectangle){ 700, 40, 130, 20 }, "Height", NULL, 100, -400, 400);
    GuiSliderBar((Rectangle){ 700, 70, 130, 20 }, "Initial Speed", NULL, 0, -400, 400);
    GuiSliderBar((Rectangle){ 700, 100, 130, 20 }, "Range", NULL, 100, -400, 400);
    GuiButton( (Rectangle){ 700, 150, 130, 40 }, "Launch" );
    EndDrawing();
  }

  CloseWindow();

  return 0;
}
