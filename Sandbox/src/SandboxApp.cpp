#include <Moonlight.h>

class Sandbox : public Moonlight::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Moonlight::Application* Moonlight::CreateApplication() {
	return new Sandbox();
}