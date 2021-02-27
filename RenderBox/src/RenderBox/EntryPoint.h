#pragma once

#ifdef RB_PlATFORM_WINDOWS{




extern RenderBox::Application* RenderBox::CreateApplication();

void main(int argc, char** argv) {

	auto app = RenderBox::CreateApplication();
	app->Run();
	delete app;

}

#endif

