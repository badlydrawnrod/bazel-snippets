#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Hello, world!");
    SetTargetFPS(60);

    while (!WindowShouldClose() && !IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawText("Hello, world!\nTo close this window, press [Esc] or click the left mouse button.", 8, 8, 20, LIME);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
