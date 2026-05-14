#include <iostream>
#include "userinput.h"

int userInput()
{
  std::cout << "Write a number to add: ";
  
  int x;

  std::cin >> x;

  return x;
}

void writeAnswer(int x)
{
  std::cout << "The answer is: " << x << "\n"; 
}


