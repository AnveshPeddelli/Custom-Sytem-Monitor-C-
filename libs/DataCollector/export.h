#ifndef DATA_COLLECTOR_API
    #ifdef DATA_COLLECTOR_EXPORT
        #define DATA_COLLECTOR_API __declspec(dllexport)
    #else
        #define DATA_COLLECTOR_API __declspec(dllimport)
    #endif
#endif