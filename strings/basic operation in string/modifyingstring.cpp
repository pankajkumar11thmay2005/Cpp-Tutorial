#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "pankaj kumar";

    // Adding a character at the end
    str.push_back('!');
    cout << "After push_back: " << str << endl;

    // Removing the last character
    str.pop_back();
    cout << "After pop_back: " << str << endl;

    // Inserting a substring
    str.insert(5, " C++");
    cout << "After insert: " << str << endl;

    // Erasing part of the string
    str.erase(5, 4); 
    cout << "After erase: " << str << endl;

    return 0;
}