#include <iostream>  // for std::cout and std::cin

//This program asks the user for 3 numbers as innput and prints the numbers to the console.
int main()
{
    std::cout << "Enter 3 numbers: "; // ask user for a number
    int y{}; // define variable y to hold user input 
    int x{}; // define variable x to hold user input
    int z{}; //define variable z to hold user input
    std::cin >> y; // get numbers from keyboard and store it in variable x
    std::cin >> x; // get numbers from keyboard and store it in variable x
    std::cin >> z; // get numbers from keyboard and store it in variable x
    std::cout << "You entered " << y << ", " << x << ", " << "and " << z << ".\n";
    return 0;
}
