#define RAYGUI_IMPLEMENTATION
#include <stdio.h>
#include <stdlib.h>
#include <raylib.h>
#include "raygui.h"
#include "projectile.h"

int main(void) {
    const int screenWidth = 900;
    const int screenHeight = 500;


    InitWindow(screenWidth, screenHeight, "Projectile Motion Simulator");

    int height = 100;
    float startAngle = 400.0f;

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);

        DrawText("Projectile Motion Simulator", 100, 10, 25, WHITE);
        DrawLine(590, 0, 590, GetScreenHeight(), Fade(LIGHTGRAY, 0.6f));
        DrawRectangle(590, 0, GetScreenWidth() - 500, GetScreenHeight(), Fade(DARKGRAY, 0.3f));
        DrawLine(0, 400, 590, 400, WHITE);
        DrawLine(100, 400, 400, startAngle, GREEN);
        DrawCircle(100, 400, 15.0, RED);

        startAngle = GuiSliderBar((Rectangle){ 700, 40, 130, 20 }, "Angle", NULL, startAngle, 0, 400);
        GuiSliderBar((Rectangle){ 700, 70, 130, 20 }, "Height", NULL, 100, -400, 400);
        GuiSliderBar((Rectangle){ 700, 100, 130, 20 }, "Initial Speed", NULL, 0, -400, 400);

        if (GuiButton( (Rectangle){ 700, 200, 130, 40 }, "Launch" )) {
            printf("yooo!\n");
        }

        DrawFPS(10, 10);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
