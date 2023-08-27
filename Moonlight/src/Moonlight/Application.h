#pragma once

#include "Core.h"

namespace Moonlight {
	class MOONLIGHT_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Defined in Client
	Application* CreateApplication();
}

