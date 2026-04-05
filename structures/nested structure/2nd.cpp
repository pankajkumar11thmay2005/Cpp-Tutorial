#include <iostream>
using namespace std;

// Define the outer structure that contains inner structure
struct outer{

    // Nested structure
    struct inner{
        int a, b;
    } in;
    int x, y;
};

int main(){
    outer obj = {{1, 2}, 10, 20};
    cout << "Inner: " << obj.in.a << " " << obj.in.b << endl;
    cout << "Outer: " << obj.x << " " << obj.y;

    return 0;
}