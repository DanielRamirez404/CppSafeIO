#include "cpp-safe-io.h"
#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>
#include <limits>

#if defined _WIN32
    #include <conio.h>
#endif

void CppSafeIO::clearConsole() 
{
    #if defined _WIN32

        clrscr();

    #elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)

        /*  using ANSI Escape Sequences ass follows:
            CSI[2J: clears screen, 
            CSI[H: cursor to top-left corner
        */

        std::cout << "\x1b[2J\x1b[H";

    #elif defined (__APPLE__)

        system("clear");

    #endif
}

void CppSafeIO::ignoreExceedingInput()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void CppSafeIO::pressEnterToContinue()
{
    std::cin.get();
    ignoreExceedingInput();
}

bool CppSafeIO::parseYesNoInput()
{
    auto input{ std::tolower(getInput<unsigned char>()) };
    
    if (input != 'y' && input != 'n')
        throw std::runtime_error("Input character was not a y/n character");

    return input == 'y';
}

std::string CppSafeIO::getInputLine()
{
    std::string input{};
    std::getline(std::cin >> std::ws, input);

    return input; 
}

