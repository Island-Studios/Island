#pragma once

#ifdef ISLAND_PLATFORM_WINDOWS

extern Island::Application* Island::CreateApplication();

int main(int argc, char** argv) {
	auto app = Island::CreateAppliction();
	app->Run();
	delete app;

	return 0;
}

#endif