#include <iostream>
#include <stdexcept>
#include <string>

namespace CppSaferInput
{
    void clearConsole();
    void pressEnterToContinue();
    void ignoreExceedingInput();
    bool parseYesNoInput();
    std::string getInputLine();

    template <typename T>
    T getInput()
    {
        T input{};
        bool hasFailed{ false };

        std::cin >> input;

        if (std::cin.fail())
        {
            if (std::cin.eof())
            {
                std::cerr << "Error: Input operation cannot be fixed\n"
                          << "Exiting the program...\n";

                exit(1);
            }

            hasFailed = true;
            std::cin.clear();
        }

        ignoreExceedingInput();

        if (hasFailed)
            throw std::runtime_error("The entered input cannot be successfully converted to the datatype that was provided\n");

        return input;
    }
}

