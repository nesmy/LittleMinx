#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace LittleMinx {
    class LM_API Application
    {
    public:
        Application(/* args */);
        virtual ~Application();

        void Run();
    private:
        /* data */
    };

    // To be define in client
    Application* CreateApplication();
}
