#include "LittleMinx/Application.h"

#include "LittleMinx/Events/ApplicationEvent.h"
#include "LittleMinx/Log.h"

namespace LittleMinx {

    Application::Application(/* args */)
    {
    }

    Application::~Application()
    {
    }

    void Application::Run()
    {
        WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			LM_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			LM_TRACE(e);
		}
        while(true);
    }

}
