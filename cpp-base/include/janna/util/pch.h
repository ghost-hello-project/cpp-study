#pragma once

#ifdef JANNA_LIB_UTIL_EXPORT
    #define JANNA_LIB_UTIL __declspec(dllexport)
#else
    #define JANNA_LIB_UTIL __declspec(dllimport)
#endif