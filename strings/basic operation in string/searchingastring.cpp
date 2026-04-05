#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "pankaj kumar";

    size_t pos = str.find("pankaj");  

    if (pos < str.size()) {
        cout << "\"pankaj\" found at index: " << pos << endl;
    }

    return 0;
}