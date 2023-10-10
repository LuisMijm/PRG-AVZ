
#include <esat/window.h>
#include <esat/draw.h>
#include <esat/input.h>
#include <esat/time.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <esat_extra/imgui.h>

#include "datastructure.h"
#include "debug.h"





void Update()
{

}


int esat::main(int argc, char **argv)
{

    srand((unsigned int)time(NULL));

    Init();

    esat::WindowInit(g_settings.window_Width, g_settings.window_Height);

    while (esat::WindowIsOpened() && 
          !esat::IsSpecialKeyDown(esat::kSpecialKey_Escape) && 
          !g_settings.exit_game)
    {
        esat::DrawBegin();
        esat::DrawClear(0, 0, 0);

        if (!g_settings.pause_game)
        {
            Update();
        }
        
        esat::DrawEnd();


        if (g_settings.debug_mode)
        {
            ImGui::ShowDemoWindow();
            DebugMenu();
        }

        if (esat::IsSpecialKeyPressed(esat::kSpecialKey_Control))
        {
            if (esat::IsKeyDown('D'))
            {
                g_settings.debug_mode = !g_settings.debug_mode;
            }
        }
        ImGui::Render();


        do
        {
            g_settings.fps_current_time = esat::Time();
            
            double elapsed_time = g_settings.fps_current_time - g_settings.fps_last_time;
            
            if (elapsed_time > 0.0f)
            {
                g_settings.fps_current_fps = 1000.0f / elapsed_time;
            }

        } while ((g_settings.fps_current_time - g_settings.fps_last_time) <= 1000.0 / g_settings.fps_fps);
        g_settings.fps_last_time = g_settings.fps_current_time;
        esat::WindowFrame();
    }
    
    esat::WindowDestroy();
    return 0;
}