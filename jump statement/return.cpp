#include <iostream>
using namespace std;

void findNum (int n) {
  	for (int i = 0; i <= 40; i++) {
      	if (i == n) {
          	cout << "Number in Range [0, 40]";
          	
          	return;
        }
    }
  	cout << "Number not in Range [0, 40]";
  	
  	return;
}

int main() {
    int n = 41;

    findNum(n);

    return 0;
}