//File name = 3-5 File scope (29 April) 8:16
#include <iostream>
using namespace std;

//Variable with file scope
static int X;

//Prototype with file scope
static void addX(int);

//main() Function
int main()
{
    //reference a file scope function
    addX(2022);

    //Reference a file scope variable
    cout << "X : " << X << endl;

    return 0; 
}

//Add a value to X
static void addX(int incr)
{
    //Reference a file scope variable
    X += incr;
}