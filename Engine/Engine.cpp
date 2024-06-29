#include <iostream>
#include <iostream>
#include <fstream>
#include <Logging.h>

int main()
{
	Debug debug;
	debug.Log(LOGGING_LIBRARY_NAME);
	debug.Log(LOGGING_LIBRARY_VERSION_C);
	system("pause");
}