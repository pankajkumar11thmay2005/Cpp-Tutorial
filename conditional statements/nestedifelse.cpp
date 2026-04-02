#include <iostream>
using namespace std;

int main() {
    int n = 31;
  
    if (n > 0) {

       
        if (n % 2 == 0) {
            cout << "positive and even number";
        }
        else {
            cout << "positive and odd number";
        }
    }
    
    else if (n == 0) {
        cout << "the number is zero";
    }
   
    else {
        cout << "the number is negative";
    }
    return 0;
}