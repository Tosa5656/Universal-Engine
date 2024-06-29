#pragma once
#include <iostream>
#include <fstream>
#include <sstream>

#include "LoggingLibraryInfo.h"

#ifndef LOGGING_H
#define LOGGING_H

#ifdef LOGGING_EXPORTS
#define LOGGING_API __declspec(dllexport)
#else
#define LOGGING_API __declspec(dllimport)
#endif

class LOGGING_API Debug
{
public:
	Debug()
	{
		
	}

	static void Log(const char* message);
	static void Warning(const char* message);
	static void Error(const char* message);
private:
};

#endif