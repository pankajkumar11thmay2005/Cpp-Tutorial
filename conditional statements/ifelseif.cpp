#include <iostream>
using namespace std;

int main() {
    int age = 4;

    if (age < 13) {
        cout << "child";
    }
 
    else if (age >= 1 and age <= 18) {
        cout << "Growing stage";
    }

    else {
        cout << "adult";
    }
    return 0;
}