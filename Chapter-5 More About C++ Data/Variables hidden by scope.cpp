//File name : 5-3 Variables hidden by scopes (April 29) 8:51
#include<iostream>
using namespace std;

//Global scope variable
int var = 1;

//The main Function.
int main()
{
    cout << var << endl;

    if (var > 0)
    {
        //this var hides the global var.
        int var = 2;
        cout << var << endl;

        if (var > 1)
        {
            //this var hides the local var
            //in the outer (if) statement
            int var = 9;
            cout << var << endl;
        }
        cout << var << endl;
        return 0;
    }
}