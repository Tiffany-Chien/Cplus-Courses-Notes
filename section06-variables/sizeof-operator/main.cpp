#include <iostream>
// climits to include
#include <climits>

using namespace std;

int main()
{
  cout << "sizeof information" << endl;
  cout << "===================================" << endl;

  cout << "char: " << sizeof(char) << " bytes." << endl;
  cout << "int: " << sizeof(int) << " bytes." << endl;
  cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
  cout << "short: " << sizeof(short) << " bytes." << endl;
  cout << "long: " << sizeof(long) << " bytes." << endl;
  cout << "long long: " << sizeof(long long) << " bytes." << endl;

  // Use value defined in climits
  cout << "=================================" << endl;
  cout << "Minimum values:" << endl;
  cout << "char: " << CHAR_MIN << endl;
  cout << "int: " << INT_MIN << endl;
  cout << "short: " << SHRT_MIN << endl;
  cout << "long: " << LONG_MIN << endl;
  cout << "long long: " << LLONG_MIN << endl;

  // sizeof can also be used with variable names
  cout << "===================================" << endl;
  int age{21};
  cout << "age is " << sizeof age << endl;
  return 0;
}