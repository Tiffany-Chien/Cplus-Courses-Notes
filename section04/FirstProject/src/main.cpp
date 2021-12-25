//  Ask the user for number and display
// Need input output libraries
#include <iostream>

// compile -> link -> create exe

int main()
{
  int favorite_number;
  // Statement must end with semicolin
  std::cout << "Enter your favorite number between 1 and 100: ";
  // cin reads in the console
  std::cin >> favorite_number;
  favorite_number = 100;
  // std:endl endline in the end to flush the buffer
  std::cout << "Amazing! That's my favorite number too!" << std::endl;
  // Main returns an integer, return 0 if good
  return 0;
}