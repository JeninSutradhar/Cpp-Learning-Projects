////////////////////
//File name : comma seperated expressions.cpp 
//Created 06:22 26 april
////////////////////

#include <iostream>

using namespace std;

int main()
{
    int Val, Tot, Amt, Cnt;
    Amt = 30;
    Tot = 12;
    Cnt = 46;

    //compute Val = rightmost expression
    Val = ( Amt++, --Tot, Cnt+3 );
    int extra = Amt + Tot;

    //Diplay result
    cout << "Val: " << Val << endl;
    cout << "Tot: " << Tot << endl;
    cout << "Amt: " << Amt << endl;
    cout << "Cnt: " << Cnt << endl;
    cout << "extra: "<<extra<<endl;

    return 0;
}