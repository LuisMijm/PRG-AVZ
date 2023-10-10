
#include "datastructure.h"
#include <esat_extra/imgui.h>

Settings g_settings;

void Init()
{
    g_settings.window_Width = 800;
    g_settings.window_Height = 800;
    g_settings.exit_game = false;
    g_settings.pause_game = false;
    g_settings.debug_mode = false;
    g_settings.fps_current_time = 0.0f;
    g_settings.fps_last_time = 0.0f;
    g_settings.fps_fps = 60;
    g_settings.fps_current_fps = 0.0f;
    g_settings.game_state = GameState::kGameState_Start;

    g_settings.show_demo_window = false;
    g_settings.show_another_window = false;
    g_settings.show_custom_window = false;
    g_settings.show_fps_window = false;

    SetupImGui();


    // g_settings = ;
}

void SetupImGui()
{
    // Change font
    // ImGuiIO &io = ImGui::GetIO();
    // ImFont *originalFont = io.Fonts->Fonts[0]; // keep original font
    // ImFont *customFont = io.Fonts->AddFontFromFileTTF("../data/Alley.otf", 16.0f);
    // ImGui::PushFont(ImGui::GetIO().Fonts->Fonts[1]);
}
