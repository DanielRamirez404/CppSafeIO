#include "cppsafeio.h"
#include <iostream>
#include <exception>

int main()
{
    try
    {
        if (false)
            CppSafeIO::clearConsole(); //not executing so that the building and testing log doesn't get erased in case of running ctest -V
        
        std::cout << "Automated tests passed.\n"
                  << "You can include the cppsafeio.h file, and use the CppSafeIO namespace.\n"
                  << "You can try to run CppSafeIO-Tests executable to test the input functions.\n";
    }
    catch (const std::exception& exception)
    {
        std::cerr << "CppSafeIO library's tests failed\n"
                  << "Error: " << exception.what() << '\n';
    
        return 1;
    }

    return 0;
}
