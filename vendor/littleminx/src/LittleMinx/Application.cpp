#include "lmpch.h"
#include "LittleMinx/Application.h"

#include "LittleMinx/Log.h"

#include <GLFW/glfw3.h>

namespace LittleMinx {

#define BIND_EVENT_FN(x) std::bind(&Application::x, this, std::placeholders::_1)

    Application::Application(/* args */)
    {
        m_Window = std::unique_ptr<Window>(Window::Create());
        m_Window->SetEventCallback(BIND_EVENT_FN(OnEvent));
    }

    Application::~Application()
    {
    }

    void Application::OnEvent(Event& e)
    {
        EventDispatcher dispatcher(e);
        dispatcher.Dispacth<WindowCloseEvent>(BIND_EVENT_FN(OnWindowClose));
        LM_CORE_TRACE("{0}", e);
    }

    void Application::Run()
    {
        while(m_Running)
        {
           // glClearColor(1, 0, 1, 1);
			//glClear(GL_COLOR_BUFFER_BIT);
            m_Window->OnUpdate();
        }
    }

    bool Application::OnWindowClose(WindowCloseEvent& e)
	{
		m_Running = false;
		return true;
	}

}
