#include "add.h" // Insert contents of add.h at this point.  Note use of double quotes here.
#include "userinput.h"

int main()
{
    int x = {userInput()};

    int y = {userInput()};
   
    writeAnswer(add(x,y));
    return 0;

}
