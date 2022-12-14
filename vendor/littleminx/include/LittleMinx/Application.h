#pragma once

#include "Core.h"
#include "Events/Event.h"
#include "LittleMinx/Events/ApplicationEvent.h"
#include "Window.h"

namespace LittleMinx {
    class LM_API Application
    {
    public:
        Application(/* args */);
        virtual ~Application();

        void Run();

        void OnEvent(Event& e);
    private:
        bool OnWindowClose(WindowCloseEvent& e);

        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
    };

    // To be define in client
    Application* CreateApplication();
}
