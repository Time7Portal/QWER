// Created by 지구인 : 2024.03.10

#include <iostream>
#include "raylib.h"

// screen size
constexpr uint16_t screenWidth = 1280;
constexpr uint16_t screenHeight = 720;


int main(void)
{
    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    // draw start
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText("Congrats! You created your first window!", 120, 300, 50, LIGHTGRAY);






        EndDrawing();
    }

    CloseWindow();

    return 0;
}