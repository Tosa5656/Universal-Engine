#pragma once

#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <iostream>

#ifndef GRAPHICSOPENGL_H
#define GRAPHICSOPENGL_H

#ifdef GRAPHICSOPENGL_EXPORTS
#define GOPENGL_API __declspec(dllexport)
#else
#define GOPENGL_API __declspec(dllimport)
#endif

namespace gogl
{
	void GOPENGL_API SetClearColor(GLclampf R, GLclampf G, GLclampf B, GLclampf A);
}

#endif