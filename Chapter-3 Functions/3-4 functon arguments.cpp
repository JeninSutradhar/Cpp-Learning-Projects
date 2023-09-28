///////////////////////
//File name : 3-4 Functon arguments 27 april 6:16
///////////////////////

//Width in (feet to inches) converter

#include <iostream>

using namespace std;

    //Function prototypes 
    int widthinfeet();
    int widthininches(int feet);

int main()
{
    //initaialise variables by calling functions
    int feet = widthinfeet();
    int wd = widthininches(feet);

    //display results
    cout << "\awidth in inches = " << wd << endl;

    return 0;
}

    //read width in feet
    int widthinfeet()
    {
        int feet;
        cout << "\aEnter width in feet: ";
        cin >> feet;

        return feet;
    }

    //calculate width in inches
    int widthininches(int feet)
    {
        return feet * 12;
    }