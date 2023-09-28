///////////////////////
//Program name: ls.2-16 Type Conversions.cpp 9:28 26april
///////////////////////

#include <iostream>

using namespace std;

int main()
{
    //Three uninitialised variables, different types.
    char mychar;
    short int myint;
    long mylong;

    //an initialised variable of yet another type.
    float myfloat = 7e4;

    //assign and convert.
    mychar = myint = mylong = myfloat;

    //display the variables
    cout << mychar <<endl;
    cout << myint <<endl;
    cout << mylong<<endl;
    cout << myfloat<<endl;

    return 0;
}