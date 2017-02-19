#ifndef LUX_API_HPP
#define LUX_API_HPP

#ifdef _WIN32
    #ifdef LUX_EXPORT_SYMBOLS
        #define LUX_API __declspec(dllexport)
    #else
        #define LUX_API __declspec(dllimport)
    #endif
#else
    #define LUX_API
#endif

#endif /* end of include guard: LUX_API_HPP */
