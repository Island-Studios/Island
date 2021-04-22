#pragma once


#ifdef ISLAND_PLATFORM_WINDOWS
	#ifdef ISLAND_BUILD_DLL
		#define ISLAND_API __declspec(dllexport)
	#else
		#define ISLAND_API __declspec(dllimport)
	#endif
#else
	#error Island Engine only supports Windows!
#endif