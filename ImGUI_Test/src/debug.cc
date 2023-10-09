
#include "debug.h"
#include <esat_extra/imgui.h>
#include "datastructure.h"

void DebugMenu() 
{
    ImGuiMainMenuBar();
    ImGui::Begin("Debug window");
    

    ImGui::Checkbox("Debug mode", &g_settings.debug_mode);
    // ImGui::SameLine();
    ImGui::Checkbox("Pause", &g_settings.pause_game);


    if (ImGui::TreeNodeEx("Game Control", ImGuiTreeNodeFlags_Framed | ImGuiTreeNodeFlags_AllowItemOverlap))
    {
        // ImGui::Text("Contenido del nodo 2");

        if (ImGui::TreeNode("Game State"))
        {
            ImGui::Text("Change Game State");

            ImGui::BeginGroup();
            if (ImGui::Button("Start"))
            {
                g_settings.game_state = GameState::kGameState_Start;
            }
            ImGui::SameLine();

            if (ImGui::Button("Main menu"))
            {
                g_settings.game_state = GameState::kGameState_MainMenu;
            }
            ImGui::SameLine();

            if (ImGui::Button("In game"))
            {
                g_settings.game_state = GameState::kGameState_InGame;
            }
            ImGui::SameLine();

            if (ImGui::Button("Game Over"))
            {
                g_settings.game_state = GameState::kGameState_GameOver;
            }
            ImGui::EndGroup();

            ImGui::TreePop();
        }
        
        if (ImGui::TreeNode("Numerical Input"))
        {
            ImGui::InputInt("Int", &g_settings.random_test_integer, 1, 10);
            ImGui::InputFloat("Float", &g_settings.random_test_float);

            ImGui::TreePop();
        }
        
        int buffer_size = 20;
        if (ImGui::TreeNode("String Input"))
        {
            ImGui::BeginGroup();

            ImGui::InputText("Name", g_settings.name, buffer_size);
            ImGui::InputText("Surname", g_settings.surname, buffer_size);
            
            ImGui::InputText("Country", g_settings.country, buffer_size, ImGuiInputTextFlags_EnterReturnsTrue);
            ImGui::InputTextMultiline("Additional text", g_settings.text, (buffer_size * 10), ImVec2(250,100));

            ImGui::EndGroup();

            ImGui::TreePop();
        }
        ImGui::TreePop(); // Necesario para cerrar el nodo
    }

    ImGui::End();
}
void ImGuiMainMenuBar()
{
    if (ImGui::BeginMainMenuBar())
    {
        if (ImGui::BeginMenu("Archivo"))
        {
            if (ImGui::MenuItem("Nuevo", "Ctrl+N"))
            {
                // Acción cuando se selecciona "Nuevo"
            }
            if (ImGui::MenuItem("Abrir", "Ctrl+O"))
            {
                // Acción cuando se selecciona "Abrir"
            }
            if (ImGui::MenuItem("Guardar", "Ctrl+S"))
            {
                // Acción cuando se selecciona "Guardar"
            }
            ImGui::Separator();
            if (ImGui::MenuItem("Salir", "Alt+F4"))
            {
                // Acción cuando se selecciona "Salir"
            }
            ImGui::EndMenu();
        }
        if (ImGui::BeginMenu("Editar"))
        {
            if (ImGui::MenuItem("Deshacer", "Ctrl+Z"))
            {
                // Acción cuando se selecciona "Deshacer"
            }
            if (ImGui::MenuItem("Rehacer", "Ctrl+Y"))
            {
                // Acción cuando se selecciona "Rehacer"
            }
            ImGui::Separator();
            if (ImGui::MenuItem("Cortar", "Ctrl+X"))
            {
                // Acción cuando se selecciona "Cortar"
            }
            if (ImGui::MenuItem("Copiar", "Ctrl+C"))
            {
                // Acción cuando se selecciona "Copiar"
            }
            if (ImGui::MenuItem("Pegar", "Ctrl+V"))
            {
                // Acción cuando se selecciona "Pegar"
            }
            ImGui::EndMenu();
        }
        if (ImGui::BeginMenu("Ver"))
        {
            if (ImGui::MenuItem("Demo de ImGui"))
            {
                // show_demo_window = true;
            }
            if (ImGui::MenuItem("Otra Ventana"))
            {
                g_settings.show_another_window = !g_settings.show_another_window;
            }
            if (ImGui::MenuItem("Ventana personalizada"))
            {
                g_settings.show_custom_window = !g_settings.show_custom_window;
            }
            if (ImGui::MenuItem("FPS"))
            {
                g_settings.show_fps_window = !g_settings.show_fps_window;
            }
            ImGui::EndMenu();
        }
        if (ImGui::BeginMenu("Ayuda"))
        {
            if (ImGui::MenuItem("Acerca de"))
            {
                // Acción cuando se selecciona "Acerca de"
            }
            ImGui::EndMenu();
        }
        ImGui::EndMainMenuBar();
    }

    // Demo de ImGui
    if (g_settings.show_demo_window)
    {
        ImGui::ShowDemoWindow(&g_settings.show_demo_window);
    }

    // Otra ventana
    if (g_settings.show_another_window)
    {
        ImGui::Begin("Otra Ventana", &g_settings.show_another_window);
        ImGui::Text("Hola desde otra ventana!");
        ImGui::End();
    }
    if (g_settings.show_custom_window)
    {
        CustomWindow();
    }
    if (g_settings.show_fps_window)
    {
        FpsWindow();
    }
    
}

void CustomWindow()
{
    ImGui::Begin("Ventana personalizada", &g_settings.show_custom_window);

    // screen style
    ImGui::SetWindowPos(ImVec2(100, 100));
    ImGui::SetWindowSize(ImVec2(100, 100));

    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(255,255,255, 1.0f));
    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.3f, 0.3f, 0.3f, 1.0f));
    ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0, 0, 120, 0.5f));
    
    ImGui::PopStyleColor(3);
    
    ImGui::End();
}

void FpsWindow()
{
    ImGui::Begin(" ", &g_settings.show_fps_window, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar);

    ImGui::SetWindowPos(ImVec2(100, 100));
    ImGui::SetWindowSize(ImVec2(100, 60));

    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 1.0f, 1.0f));
    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.3f, 0.3f, 0.3f, 1.0f));
    ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0.0f, 0.0f, 0.02f, 0.5f));

    // ImGui::PushStyleVar(ImGuiStyleVar_ScaleAllSizes, 1.5f);


    

    ImGui::Text("FPS: %.2f", g_settings.fps_current_fps);


    ImGui::PopFont();
    ImGui::SetWindowFontScale(1.0f);
    ImGui::PopStyleVar();
    ImGui::PopStyleColor(3);

    ImGui::End();
}