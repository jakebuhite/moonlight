#pragma once

#ifdef ML_PLATFORM_WINDOWS

extern Moonlight::Application* Moonlight::CreateApplication();

// argc -> Argument Count
// argv -> Vector of arguments
int main(int argc, char** argv)
{
	Moonlight::Application* app = Moonlight::CreateApplication();
	app->Run();
	delete app;
}

#endif