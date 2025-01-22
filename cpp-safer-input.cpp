#include "cpp-safer-input.h"
#include <iostream>
#include <string>

#if defined _WIN32
    #include <conio.h>
#endif

void CppSaferInput::clearConsole() 
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

