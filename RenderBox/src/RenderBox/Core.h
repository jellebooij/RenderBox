#pragma once

#ifdef RB_PlATFORM_WINDOWS
	#ifdef RB_BUILD_DLL
		#define RENDERBOX_API __declspec(dllexport)
	#else
		#define RENDERBOX_API __declspec(dllimport)
	#endif
#endif