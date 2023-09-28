// File name Returning with the return statement
#include <iostream>

using namespace std;

// Function Prototype
void Decide();

// The main Function
int main()
{
    Decide();
    return 0;
}

// decide when to return
void Decide()
{
    int when;
    cout << "When to return (0 = now, 1 = later): ";
    cin >> when;

    if (when == 0)
    {
        cout << "returning now";
        return;
    }
    cout << "Returning later";
    return;
}