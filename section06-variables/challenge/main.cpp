#include <iostream>

using namespace std;

int main()
{
    int small_room_num;
    int large_room_num;
    const int small_room_price = 25;
    const int large_room_price = 35;
    cout << "Please enter number of small romms: " << endl;
    cin >> small_room_num;
    cout << "Please enter number of large romms: " << endl;
    cin >> large_room_num;
    cout << "The estimate for carpet cleaning service:" << endl;
    cout << "Number of small romms: " << small_room_num << endl;
    cout << "Number of large rooms: " << large_room_num << endl;
    cout << "Cost: $" << small_room_num * small_room_price + large_room_num * large_room_price << endl;


    return 0;
}