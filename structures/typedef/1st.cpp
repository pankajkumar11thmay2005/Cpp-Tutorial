#include <iostream>
using namespace std;

typedef struct pankaj{
    int x, y;

    // Alias is specified here
} pnkj;

int main()
{

    // Using alias
    pnkj s = {0, 1};
    
    cout << s.x << " " << s.y << endl;
    return 0;
}