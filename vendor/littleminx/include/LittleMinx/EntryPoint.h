#pragma once

#ifdef LM_PLATFORM_WINDOWS

extern LittleMinx::Application* LittleMinx::CreateApplication();

int main(int argc, char** argv)
{
    LittleMinx::Log::Init();
    LM_CORE_WARN("Initialize Log");
    int a = 5;
    LM_INFO("Hello! Var={0}", a);
    auto app = LittleMinx::CreateApplication();
    app->Run();
    delete app;
}

#endif