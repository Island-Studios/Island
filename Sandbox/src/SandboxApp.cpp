#include <Island.h>

class Sandbox : public Island::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Island::Application* Island::CreateApplication() {
	return new Sandbox;
}