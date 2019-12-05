#pragma once
//If the platform is Windows
#ifdef HUM_WINDOWS_PLATFORM
	// If compiling Hummus' DLL
	#ifdef HUM_COMPILING_DLL
		// if compiling dll, export it to application. 
		#define HUMMUS_API __declspec(dllexport)
	#else 
		// if application does have dll, import it. 
		#define HUMMUS_API __declspec(dllimport)
	#endif
#else
	#error Hummus only supports Windows!
#endif