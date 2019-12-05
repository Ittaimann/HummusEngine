#include "Hummus.h"

class Sandbox : public HUM::Application 
{
public:
	Sandbox() 
	{

	}

	~Sandbox() 
	{

	}                      
};


HUM::Application* HUM::CreateApplication() 
{
	return new Sandbox();
}

// #include errors detected. Please update your includePath. Squiggles are disabled for this translation unit (C:\devProjects\HummusEngineRepo\HummusEngineProject\Sandbox\SandboxApp.cpp).C/C++(1696)