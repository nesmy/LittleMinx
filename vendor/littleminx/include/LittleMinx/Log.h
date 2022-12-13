#pragma once

#include <memory.h>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace LittleMinx {

    class LM_API Log
    {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger; 
    };
    
  
}

// Core log macros
#define LM_CORE_TRACE(...)  ::LittleMinx::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define LM_CORE_INFO(...)   ::LittleMinx::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LM_CORE_WARN(...)   ::LittleMinx::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LM_CORE_ERROR(...)  ::LittleMinx::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LM_CORE_FATAL(...)  ::LittleMinx::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define LM_TRACE(...)  ::LittleMinx::Log::GetClientLogger()->trace(__VA_ARGS__)
#define LM_INFO(...)   ::LittleMinx::Log::GetClientLogger()->info(__VA_ARGS__)
#define LM_WARN(...)   ::LittleMinx::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LM_ERROR(...)  ::LittleMinx::Log::GetClientLogger()->error(__VA_ARGS__)
#define LM_FATAL(...)  ::LittleMinx::Log::GetClientLogger()->fatal(__VA_ARGS__)