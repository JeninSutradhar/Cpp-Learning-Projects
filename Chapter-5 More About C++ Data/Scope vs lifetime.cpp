#include <iostream>
using namespace std;

//Function prototype
void DisplayTitle(int Amount);

int main()
{
    //Variable with automatic storage duration
    int Amount = 500;

    DisplayTitle(Amount);
    cout << Amount;

    return 0;
}

//A function that executes during the variable Amount's lifetime
void DisplayTitle(int Amount)
{
    cout << "Amount = " << Amount << endl;
}
