#include <iostream>
using namespace std;

//Variable with global scope.
int counter = 0;

//Function Prototype
void addcounter(int);

//main() Function
int main()
{
    addcounter(5312);//Random value

    //Reference a global variable
    cout << "Counter : " << counter << endl;

    return 0;
}

//add a value to the counter variable
void addcounter(int incr)
{
    //reference (Global var.)
    counter += incr;
}
