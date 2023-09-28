//////////////////////////
//File name = The switch...case statement 27April 8:37
//////////////////////////

#include <iostream>

using namespace std;

void DisplayMenu() {
    cout << "Please select an option:" << endl;
    cout << "1. Process Receivables" << endl;
    cout << "2. Process Payables" << endl;
    cout << "3. Quit" << endl;
}

int GetSelection() {
    int selection;
    cin >> selection;
    return selection;
}

int main()
{
    //Display the menu.
    DisplayMenu();

    //Get the menu selection
    int selection;
    selection = GetSelection();

    //select the matching process
    switch (selection)
    {
        case 1:
            cout << "Processing Receivables" << endl;
            break;
        case 2:
            cout << "Processing Payables" << endl;
            break;
        case 3:
            cout << "Quitting" << endl;
            break;
        default:
            cout << "\aInvalid Selection" << endl;
    }

    return 0;
}