#include <iostream>
using namespace std;

struct PNKJ{
    int count;
    void showCount(){
        cout << count << endl;
    }
};

int main(){
    PNKJ pnkj = {224};

    // Creating pointer
    PNKJ *sptr = &pnkj;

    // Accessing using arrow operator
    sptr->showCount();
    return 0;
}