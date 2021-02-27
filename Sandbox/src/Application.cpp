#include <RenderBox.h>;

class Sandbox : public RenderBox::Application {

public:
	Sandbox() {

	}

	~Sandbox(){

	}

};

RenderBox::Application* RenderBox::CreateApplication() {
	
	return new Sandbox();

}