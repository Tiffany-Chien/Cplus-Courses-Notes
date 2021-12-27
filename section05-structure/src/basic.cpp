#include <iostream>

using namespace std;

int main()
{
  // HelloWorld!
  cout << "Hello";
  cout << "World!" << endl;
  cout << "Hello"
       << " World!" << endl;
  cout << "Hello World!\n"
       << endl;

  // can insert by {int} space {int}
  int num1;
  int num2;
  cout << "Enter 2 integers separated with a space";
  cin >> num1 >> num2;
  cout << "You entered" << num1 << " and " << num2 << endl;

  // If user only input 10.5
  // we will get num1 = 10 and double = 0.5
  doube doube1;
  cout << "Enter an integer";
  cin >> num1;
  cout << "Enter a double";
  cin >> double1;
  cout << "The integer is " << num1 << endl;
  cout << "The double is " << double1 << endl;

  return 0;
}