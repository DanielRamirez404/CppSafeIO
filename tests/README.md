# How to run the tests

> [!NOTE]
> Requirements: ```Cmake```, ```Make``` and a ```C++``` compiler previously installed.  

You have to create a ```build``` subdirectory inside of this one, and once you go there, run the commands: ```cmake ..``` and ```make``` on your shell, in that very order. This will create an executable that you'll be able to run.

> [!TIP]
> You can also chain the commands (including the creation of the build subdirectory) in order to create the executable file as follows:
>   ```
>   mkdir build && cd build && cmake .. && make
>   ```
> This should work at least on both ```Linux```'s terminal and ```Windows```'s ```CMD```.
