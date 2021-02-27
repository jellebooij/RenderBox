#pragma once
#include "Core.h"


namespace RenderBox {

	class RENDERBOX_API Application
	{
	public:

		Application();
		virtual ~Application();
			
		void Run();

	};

	//Defined in client
	Application* CreateApplication();

}