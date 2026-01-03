#include "raylib.h"
#include <vector>

struct Ball {
    Vector2 position;
    Vector2 speed;
    float radius;
};

int main()
{
    InitWindow(800, 450, "Balls Example");
    SetTargetFPS(60);

    std::vector<Ball> balls = { {{100,100},{2,2},20}, {{300,200},{-3,2},15} };

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        for (auto &ball : balls) {
            ball.position.x += ball.speed.x;
            ball.position.y += ball.speed.y;

            if (ball.position.x < 0 || ball.position.x > 800) ball.speed.x *= -1;
            if (ball.position.y < 0 || ball.position.y > 450) ball.speed.y *= -1;

            DrawCircleV(ball.position, ball.radius, MAROON);
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
