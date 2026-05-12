#include <iostream>

// program that multiplies integer from user input by two and prints return value to console
int main()
{
  // instructions to user printed to console to enter an integer
  std::cout << "Enter an integer: ";
 
  // initializes the integer for user to extract later
  int integer {};
 
  // extracts the integer variable from user input
  std::cin >> integer;

  // prints the return value to the screen
  std::cout << "Double " << integer << " is: " << integer * 2 << '\n';
  std::cout << "Triple " << integer << " is: " << integer * 3 << '\n';

  return 0;
}
