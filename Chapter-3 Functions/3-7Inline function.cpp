///////////////////////
// File name : An inline function 27 April 7:05
///////////////////////

#include <iostream>
#include <cstdlib>

using namespace std;

//An Inline Function
inline void ErrorMsg(char*s)
{
    cout << '\a' << s;
    exit(1);
}

int main()//The main function
{
    ErrorMsg("You called?");
}