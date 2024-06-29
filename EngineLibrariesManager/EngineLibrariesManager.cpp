#include <iostream>
#include <string>
#include <sstream>
#include <chrono>
#include <thread>
#include <Logging.h>

#define ENGINE_LIBRARIES_MANAGER_VERSION "0.1"

#define TEXT_TYPING_DELAY 60
#define TEXT_SEND_DELAY 1000
#define TEXT_SEND_SLEEP std::this_thread::sleep_for(std::chrono::milliseconds(TEXT_SEND_DELAY));

void PrintText(const std::string& text, int delay_ms) {
    for (char c : text) {
        std::cout << c;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
    }
}

int main()
{
    std::stringstream ss;
    ss << "Welcome to Engine Libraries Manager v " << ENGINE_LIBRARIES_MANAGER_VERSION << "!" << std::endl;
    PrintText(ss.str(), TEXT_TYPING_DELAY);
    ss.str("");

    TEXT_SEND_SLEEP;

    ss << "Find engine libraries..." << std::endl;
    PrintText(ss.str(), TEXT_TYPING_DELAY);
    ss.str("");


}