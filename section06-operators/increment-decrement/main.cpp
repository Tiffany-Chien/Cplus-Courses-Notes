#include <iostream>

using namespace std;

int main()
{
    int result{0};
    int counter{20};

    // ++ prefix performs before the counter operation
    // preincrement: increment before using
    result = ++counter + 10;
    // equivalent to:
    // counter = counter + 1;
    // result = counter + 10;
    // result is 21

    // ++ postfix performs after the counter is operated
    result = counter++ + 10;
    // equivalent to:
    // result = counter + 10;
    // counter += 1;
    // result is 20
}