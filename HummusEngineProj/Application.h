#pragma once
// Specifies that the compiler includes the header file only once, when compiling a source code file.
//The use of #pragma once can reduce build times, as the compiler won't open and read the file again 
// after the first #include of the file in the translation unit. It's called the multiple-include 
// optimization. It has an effect similar to the include guard idiom, which uses preprocessor macro
// definitions to prevent multiple inclusions of the contents of the file. It also helps to prevent 
// violations of the one definition rule, the requirement that all templates, types, functions, and 
// objects have no more than one definition in your code.

#include "Core.h"

namespace Hummus 
{
	class HS_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void Run() 
		{
			while (true);
		}
	};
}


