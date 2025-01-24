# CppSafeIO

> [!NOTE]
> TL;DR: Portable and easy-to-use ```C++``` library which provides clean input/output operations.

```C++```'s native input/output library (```iostream```) doesn't provide the kind of high-level functions that you might like to use in your own projects, such as clearing the console, or stopping the natural control flow until a given key is pressed. This library aims to solve that in an beginner-friendly approach!  

## How to use

You only need to include the ```cpp-safe-io.h``` header file. Henceforth, all of the library's functions will be available inside of the ```CppSafeIO``` namespace, similarly to the ```std``` namespace of ```C++```'s standard library. Here's a simple example showcasing a program that won't exit until the enter key is pressed. 

> [!TIP]
> You can also add the ```using namespace CppSafeIO;``` statement if you wish to use this library's functions without needing to write the namespace, although that's usually considered a bad practice.

main.cpp:
```
#include "cpp-safe-io.h"
#include <iostream>

int main()
{
    std::cout << "press the enter key to finish\n";
    CppSafeIO::pressEnterToContinue();
    return 0;
}
```

## Supported Functions

> [!WARNING]
> Don't forget to add the ```CppSafeIO``` namespace if you want to try out any of these functions.

* ```<typename T> T getInput()```: gets the input from the user as the provided datatype as the template argument (```<T>```). On failure, it throws a ```std::runtime_error```.
* ```void clearConsole()```: clears the console where the program is executed if the OS is supported (namely, ```Windows```, ```Linux``` or ```MacOS``` systems).
* ```void pressEnterToContinue()```: waits until the user presses the ```Enter``` key and ignores all input previously entered.
* ```void ignoreExceedingInput()```: clears ```std::cin```'s buffer.
* ```void parseYesNoInput()```: gets one character input and returns true or false if it matches the ```Y``` or ```N``` characters, respectively (case insensitive). On failure, it throws a ```std::runtime_error```.
* ```std::string getInputLine():``` gets all entered input until a line break, as a ```std::string```.
