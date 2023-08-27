#pragma once

#ifdef ML_PLATFORM_WINDOWS // Only applies to windows
	#ifdef ML_BUILD_DLL // If we're trying to build the dll
		#define MOONLIGHT_API __declspec(dllexport)
	#else
		#define MOONLIGHT_API __declspec(dllimport)
	#endif
#else // TODO -> Support additional operating systems
	#error Moonlight only supports Windows!
#endif
