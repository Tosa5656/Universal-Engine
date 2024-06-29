#include "pch.h"
#include "Logging.h"

void LOGGING_API Debug::Log(const char* message)
{
	std::cout << message << std::endl;
}

void LOGGING_API Debug::Warning(const char* message)
{
	std::stringstream ss;
	ss << "Warning: ";
	ss << message;

	std::cout << ss.str() << std::endl;
}

void LOGGING_API Debug::Error(const char* message)
{
	std::stringstream ss;
	ss << "Error: ";
	ss << message;

	std::cout << ss.str() << std::endl;
}