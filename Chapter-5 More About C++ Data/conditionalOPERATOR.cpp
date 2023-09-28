

#include <iostream>
int main()
{
    float Dues;    //Dues amount

    //Read the dues.
    std::cout << "Enter dues amount: ";
    std::cin >> Dues;

    //are the dues paid in time?
    std::cout << "On time? (y/n) ";
    char yn;
    std::cin >> yn;
    bool Overdue;    //true if Overdue, false in on time
    Overdue = yn != 'y';
    float AmountDue; //amount to be computed

    //use conditional operator to compute.
    AmountDue = Overdue ? Dues * 1.10 : Dues;

    //Display the dues amount.
    std::cout << "AmountDue: ";
    std::cout << AmountDue;

    return 0;

}