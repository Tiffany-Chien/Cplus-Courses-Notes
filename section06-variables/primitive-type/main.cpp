#include <iostream>

using namespace std;

int main()
{
  // char uses single quotes
  char middle_initial{'J'};
  cout << "My middle name is " << middle_initial << endl;

  unsigned short int exam_score{55}; // same as unsigned short exam_score {55}
  cout << "My exam score is " << exam_score << endl;

  long long people_on_earth{7'600'000'000}; // using the curly braces to declare will give warnings and prevent overflow
  cout << "There are about " << people_on_earth << " on earth" << endl;

  // boolean
  bool game_over{false};
  cout << "The value of gameOver is " << game_over << endl; // game_over will print out 0 since only 0 is false in C++
}