#pragma once

#define GLEW_STATIC
#include <GL/glew.h>

#include <GLFW/glfw3.h>

#include <GraphicsOpenGL.h>

#include <iostream>

#ifndef WINDOWPROCCESMANAGER_H
#define WINDOWPROCCESMANAGER_H

#ifdef WINDOWPROCCESMANAGER_EXPORTS
#define WPM_API __declspec(dllexport)
#else
#define WPM_API __declspec(dllimport)
#endif

void WPM_API Window();

#endif