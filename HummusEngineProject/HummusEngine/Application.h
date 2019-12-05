#pragma once

#include "Core.h"

namespace HUM 
{
	class HUMMUS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
		void Print();
		void MakeHummus();

		
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

