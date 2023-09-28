///////////////////////
// file name = defining a function 9:44 april 23
///////////////////////
#include <iostream>
using namespace std;

void ErrorMsg();             //function prototype

int main()
{
    ErrorMsg();              //calling the function
    return 0;  
}

void ErrorMsg()
{
    cout << "\a Error!";   //display error
}