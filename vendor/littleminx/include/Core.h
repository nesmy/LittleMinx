#pragma once

#ifdef LM_PLATFORM_WINDOWS
    #ifdef LM_BUILD_DLL
        #define LM_API __declspec(dllexport)
    #else
         #define LM_API __declspec(dllimport)
    #endif
#else
    #error LittleMinx only support Windows for now!
#endif