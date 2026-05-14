#include "add.h" // Insert contents of add.h at this point.  Note use of double quotes here.
#include <iostream>
#include "userinput.h"

int main()
{
    int x = {userInput()};

    int y = {userInput()};
   
    writeAnswer(add(x,y));
    return 0;

}
