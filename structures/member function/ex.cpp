#include <iostream>
using namespace std;

struct Point{
    int x, y;

    // Member function
    int sum(){
        return x + y;
    }
};

int main(){
    Point s = {0, 1};
    // Call member function using (.) operator
    cout << s.sum();
    return 0;
}