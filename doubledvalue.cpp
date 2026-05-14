#include <iostream>

int doubledNumber(int x)
{

  return x * 2;

}

//Program that takes the users input number and doubles it
int main()
{
  std::cout << "Please input a number you would like doubled: ";
  
  int myNum{};
  
  std::cin >> myNum;

  std::cout << "Your number doubled is " << doubledNumber(myNum) << "\n"; 
  return 0;
}
