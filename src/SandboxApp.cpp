#include <LittleMinx.h>

class Sandbox : public LittleMinx::Application
{
public:
    Sandbox()
    {

    }

    ~Sandbox()
    {

    }

};

LittleMinx::Application* LittleMinx::CreateApplication()
{
    return new Sandbox();
}