#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 9;

    // Conditional Operator
    int result = (a < b) ? b : a;
    cout << "The greatest number "
          "is " << result;

    return 0;
}