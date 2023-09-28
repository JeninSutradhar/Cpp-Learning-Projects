/////////////////////////////////
// File Name: none
/////////////////////////////////
#include <iostream>
/////////////////////////////////
// The main() Function
/////////////////////////////////
int main()
{
    int Ctr, OldCtr, NewCtr;

    //making the assignments    
        OldCtr = 123;           //OldCtr is 123
        NewCtr = ++OldCtr;      //NewCtr is 124, old Ctr is 124
        Ctr = NewCtr--;         //Ctr is 124, NewCtr is 123

    //Display the results
        std::cout << OldCtr;
        std::cout << ' ';
        std::cout << NewCtr;
        std::cout << ' ';
        std::cout << Ctr;


    return 0;
}