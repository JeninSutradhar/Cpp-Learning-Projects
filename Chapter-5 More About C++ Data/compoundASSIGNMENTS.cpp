#include <iostream>
int main()
{
    long Total, Subtotal, Detail;

    //initial values
    Total = 10000;
    Subtotal = 90;
    Detail = 5;
    Subtotal *= Detail;
    Total += Subtotal;    
    
    //Display all three
    std::cout << Total;
    std::cout << ' ';
    std::cout << Subtotal;
    std::cout << ' ';
    std::cout << Detail;
    
    return 0;
}