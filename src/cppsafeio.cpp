#include "cppsafeio.h"
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

bool CppSafeIO::parseYesNoInput(char yesChar, char noChar) {
    yesChar = std::tolower(yesChar);
    noChar = std::tolower(noChar);

    if (yesChar == noChar)
        throw std::runtime_error("y/n characters cannot be the same one.");

    auto input{ std::tolower(getInput<unsigned char>()) };
    
    if (input != yesChar && input != noChar)
        throw std::runtime_error("Input character was not a y/n character");

    return input == yesChar;
}

bool CppSafeIO::parseYesNoInput()
{
    return parseYesNoInput('y', 'n');
}

std::string CppSafeIO::getInputLine()
{
    std::string input{};
    std::getline(std::cin >> std::ws, input);

    return input; 
}

