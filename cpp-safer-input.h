#pragma once
#include <iostream>
#include <stdexcept>
#include <string>

namespace CppSaferInput
{

  template <typename T> T getUserInput()
  {
      T userInput{};
      bool hasFailed{ false };

      std::cin >> userInput;

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

      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

      if (hasFailed)
          throw std::runtime_error("The entered input cannot be successfully converted to the datatype that was provided\n");

      return userInput;
  }

  void clearConsole();
  void getAnyKeyToContinue();
  bool parseYesNoInput();
  std::string getInputLine();
}

