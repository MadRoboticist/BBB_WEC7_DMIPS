/** @file stdafx.h 
	@brief include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
*/

#pragma once

#pragma comment(linker, "/nodefaultlib:libc.lib")
#pragma comment(linker, "/nodefaultlib:libcd.lib")

/** @brief NOTE - this value is not strongly correlated to the Windows CE OS version being targeted */
#define WINVER _WIN32_WCE

#include <ceconfig.h>
#if defined(WIN32_PLATFORM_PSPC) || defined(WIN32_PLATFORM_WFSP)
#define SHELL_AYGSHELL
#endif

#ifdef _CE_DCOM
#define _ATL_APARTMENT_THREADED
#endif

#include <windows.h>




#include <stdio.h>
#include <tchar.h>

#if defined(WIN32_PLATFORM_PSPC) || defined(WIN32_PLATFORM_WFSP)
#ifndef _DEVICE_RESOLUTION_AWARE
#define _DEVICE_RESOLUTION_AWARE
#endif
#endif

#ifdef _DEVICE_RESOLUTION_AWARE
#include "DeviceResolutionAware.h"
#endif

#if _WIN32_WCE < 0x500 && ( defined(WIN32_PLATFORM_PSPC) || defined(WIN32_PLATFORM_WFSP) )
	#pragma comment(lib, "ccrtrtti.lib")
	#ifdef _X86_	
		#if defined(_DEBUG)
			#pragma comment(lib, "libcmtx86d.lib")
		#else
			#pragma comment(lib, "libcmtx86.lib")
		#endif
	#endif
#endif

#include <altcecrt.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/** @brief so we can use the type uint32_t */
typedef unsigned __int32 uint32_t;
/** @brief so we can use the type uint16_t */
typedef unsigned short uint16_t;
/** @brief so we can use the type uint8_t */
typedef unsigned char uint8_t;
// TODO: reference additional headers your program requires here


#include "dhry.h"