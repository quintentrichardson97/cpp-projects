#include <iostream>

//Ask the user to enter two numbers to return values after adding and subtracting both
int main ()
{
  // Prompt user to enter first number
  std::cout << "Enter an Integer: ";
  
  // Allocate memory address for first number
  int firstNum {};

  // Request user to input first number
  std::cin >> firstNum;

  //  Prompt user to input the second number
  std::cout << "Enter another integer: ";

  // Allocate memory address for second number
  int secondNum {};

  // Exract user input for second number
  std::cin >> secondNum;

  //Print the return values to the console
  std::cout << firstNum << " + " << secondNum << " is " << firstNum + secondNum << ".\n";
  std::cout << firstNum << " - " << secondNum << " is " << firstNum - secondNum << ".\n";



  return 0;
}
