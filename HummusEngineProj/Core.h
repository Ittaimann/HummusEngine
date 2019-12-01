#pragma once

// If we are using Windows platform
#ifdef HS_PLATFORM_WINDOWS
	// if compiling dll, export it 
	#ifdef HS_BUILD_DLL
		#define HS_API _declspec(dllexport)
	// if dll is already built, import it. 
	#else 
		#define HS_API _declspec(dllimport)
	#endif
#else 
	#error Hummus only supports Windows!
#endif
	

namespace Hummus 
{

}