// preprocessor: start with # - getting the source code ready for the compiler
#include <iostream>

// Using the entire std namespace
using namespace std;
// Can specify name space
using std::cout;

// main should return 0 to indicate the program successfully executed
// main, std, cin, cout, endl: identifier
int main()
{
  int favorite_number;
  // std - namespaces
  cout << "Please choose your favorite number from 1 to 100";
  cin >> favorite_number;
  cout << "That's my favorite number too!" << endl;
  // We want to add on favorite number
  cout << "No really!!, " << favorite_number << " is my favorite number" << endl;
  return 0;
}
