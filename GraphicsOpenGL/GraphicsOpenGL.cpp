#include "pch.h"
#include "GraphicsOpenGL.h"

namespace gogl
{
	void GOPENGL_API SetClearColor(GLclampf R, GLclampf G, GLclampf B, GLclampf A)
	{
		glClearColor(R, G, B, A);
	}
}