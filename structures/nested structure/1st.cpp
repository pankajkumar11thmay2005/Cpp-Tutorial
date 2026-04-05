#include <iostream>
using namespace std;

// Define inner structure
struct inner{
    int a, b;
};

// Define the outer structure that contains the inner strucute
struct outer{
    inner in;
    int x, y;
};

int main(){
    outer obj = {{1, 2}, 10, 20};
    cout << "Inner: " << obj.in.a << " " << obj.in.b << endl;
    cout << "Outer: " << obj.x << " " << obj.y;
    return 0;
}