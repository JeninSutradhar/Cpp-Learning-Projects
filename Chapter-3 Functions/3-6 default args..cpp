///////////////////
// File name = a function with default arguments
///////////////////

#include <iostream>

using namespace std;

// Function prototype
void show(int = 1, float = 2.3, long = 4);

// Main function
int main()
{
    show();               // All three arguments default
    show(3);              // Provide 1st argument  
    show(4, 1.2);         // Provide 1st two
    show(9, 3.55 , 12L);  // Provide all three
    return 0;
}

// Display results
void show(int first, float second, long third)
{
    cout << "First = " << first << endl;
    cout << "Second = " << second << endl;
    cout << "Third = " << third << endl;
}
