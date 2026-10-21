
#include "raylib.h"

int main(void)
{
    int screen_width;
    int screen_height;
    int i;
    float step_width;
    float step_height;
    float step_depth;
    float start_x;
    float start_y;
    float start_z;
    Vector3 step_position;
    Vector3 step_size;
    Camera3D camera;

    screen_width = 800;
    screen_height = 450;

    step_width = 3.0f;
    step_height = 0.4f;
    step_depth = 1.2f;

    start_x = 0.0f;
    start_y = 0.0f;
    start_z = 0.0f;

    camera.position.x = 0.0f;
    camera.position.y = 4.0f;
    camera.position.z = 8.0f;

    camera.target.x = 0.0f;
    camera.target.y = 0.0f;
    camera.target.z = -2.0f;

    camera.up.x = 0.0f;
    camera.up.y = 1.0f;
    camera.up.z = 0.0f;
    camera.fovy = 45.0f;
    camera.projection = CAMERA_PERSPECTIVE;

    InitWindow(
        screen_width,
        screen_height,
        "Infinite Staircase - 3D Prototype"
    );

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        BeginMode3D(camera);

        for (i = 0; i < 10; i++)
        {
            step_position.x = start_x;
            step_position.y = start_y -
                (float)i * step_height;
            step_position.z = start_z -
                (float)i * step_depth;

            step_size.x = step_width;
            step_size.y = step_height;
            step_size.z = step_depth;

            DrawCube(
                step_position,
                step_size.x,
                step_size.y,
                step_size.z,
                GRAY
            );

            DrawCubeWires(
                step_position,
                step_size.x,
                step_size.y,
                step_size.z,
                DARKGRAY
            );
        }

        DrawGrid(20, 1.0f);

        EndMode3D();

        DrawText(
            "First 3D staircase",
            20,
            20,
            20,
            DARKGRAY
        );

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
