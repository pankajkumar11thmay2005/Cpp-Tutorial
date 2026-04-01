
#include <iostream>

using namespace std;

// Driver code
int main(void)
{
    int x, y;

    int result;

    x = 6;
    y = 9;

    // using modulo operator
    result = x % y;
    cout << result << endl;

    result = y % x;
    cout << result << endl;

    // for different values
    x = 10;
    y = 12;

    result = x % y;
    cout << result;

    return 0;
}
