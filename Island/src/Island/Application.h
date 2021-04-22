#pragma once

#include "Core.h"

namespace Island {
	class ISLAND_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();

}

