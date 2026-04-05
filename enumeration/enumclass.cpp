#include <iostream>
using namespace std;

// Define the enum class
enum class Day
{
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main()
{

    // initializing
    Day today = Day::Thursday;

    // Print the enum
    cout << static_cast<int>(today);
    
    return 0;
}