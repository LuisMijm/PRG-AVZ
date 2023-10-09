
#ifndef DATASTRUCTURE_
#define DATASTRUCTURE_ 1

enum GameState
{
    kGameState_Start,
    kGameState_MainMenu,
    kGameState_InGame,
    kGameState_GameOver,
    kGameState_None
};

struct Settings
{
    // window
    int window_Width;
    int window_Height;

    // menu logic
    bool exit_game;
    bool pause_game;
    bool debug_mode;
    GameState game_state;

    // Frames
    double fps_current_time;
    double fps_last_time;
    double fps_current_fps;
    int fps_fps;

    // Test variables
    int random_test_integer;
    float random_test_float;
    char name[20], surname[20], country[20], text[20];


    // ImGui screens test variables
    bool show_demo_window;
    bool show_another_window;
    bool show_custom_window;
    bool show_fps_window;

};

extern Settings g_settings;

void Init();
void SetupImGui();

#endif