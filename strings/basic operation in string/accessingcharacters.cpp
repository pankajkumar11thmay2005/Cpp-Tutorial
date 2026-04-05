#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello Pankaj";

    // Access using index operator []
    cout << "First character: " << str[0] << endl;
    cout << "Fifth character: " << str[4] << endl;

    // Access using at()
    cout << "Character at index 6: " << str.at(6) << endl;

    return 0;
}