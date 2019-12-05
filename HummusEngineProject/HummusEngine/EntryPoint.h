#pragma once
#include "Application.h"

#ifdef HUM_WINDOWS_PLATFORM

extern HUM::Application* HUM::CreateApplication();

int main(int argc, char* argv[])
{
	HUM::Application* _App = HUM::CreateApplication();
	
	_App->Print();
	_App->MakeHummus();
	delete _App;
	return 0;
}



#endif