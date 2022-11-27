#if !defined(__PROJECTIONFX_CONST_H__)
#define __PROJECTIONFX_CONST_H__

#include <Arduino.h>

String getVersion()
{
#ifdef PFX_VERSION
    // char buffer[40];
    // sprintf(buffer, "%s", PFX_VERSION);
    // return String(buffer);
    return PFX_VERSION;
#endif
    return "DEV";
}

#endif //__PROJECTIONFX_CONST_H__