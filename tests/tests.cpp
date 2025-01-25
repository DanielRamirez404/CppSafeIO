#include "cpp-safe-io.h"
#include <iostream>
#include <exception>

int main()
{
    CppSafeIO::clearConsole();
    std::cout << "console cleared successfully!\n"
              << "press enter to continue\n";

    CppSafeIO::pressEnterToContinue();
    CppSafeIO::clearConsole();

    std::cout << "Enter a full line text to show twice: "
              << CppSafeIO::getInputLine() << '\n';

    try
    {
        std::cout << "Enter an integer: ";
        auto integer{ CppSafeIO::getInput<int>()  };
        std::cout << "Your integer is: " << integer << '\n';

        std::cout << "Did you like the library? (y/n): ";
        auto isUserCool{ CppSafeIO::parseYesNoInput() };

        auto message { (isUserCool) ? "Thank you! <3" : "ouch..." };
        std::cout << message << '\n';
    }
    catch (const std::exception& exception)
    {
        std::cout << "Your input is not valid\n"
                  << "Error: " << exception.what();
    
        return 1;
    }

    return 0;
}
