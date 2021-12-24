#include <iostream>

int main()
{
  int favorite_number;

  std::cout << "Please choose your favorite number from 1 to 100";
  std::cin >> favorite_number;
  std::cout << "That's my favorite number too!" << std::endl;
  // We want to add on favorite number
  std::cout << "No really!!, " << favorite_number << " is my favorite number" << std::endl;
  return 0;
}