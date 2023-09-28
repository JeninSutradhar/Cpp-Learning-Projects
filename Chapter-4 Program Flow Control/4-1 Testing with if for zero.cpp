/////////////////////////////////
// 4-1 Testing with if for zero.cpp
/////////////////////////////////

#include <iostream>
using namespace std;

int main()
{
    int selection;
    cout << "Enter 0 to compute: ";
    cin >> selection;

    if (selection == 0)
        cout << "You choose to compute";
    else exit;

    return 0;
}
