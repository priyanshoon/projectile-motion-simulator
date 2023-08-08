#include <stdio.h>
#include <stdlib.h>
#include <raylib.h>


int main(void) {
    const int screenWidth = 1400;
    const int screenHeight = 800;

    InitWindow(screenWidth, screenHeight, "Projectile Motion Simulator");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Projectile Motion Simulator", 555, 0, 25, BLACK);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
