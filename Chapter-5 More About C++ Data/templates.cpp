#include <iostream>
using namespace std;

template <typename T>
T max(T a, T b)
{
    return(a > b) ? a : b;
}

int main()
{
    int x = 12;
    int y = 10;
    
    //Print max.value on terminal
    cout << ::max(x, y) << endl;

    return 0;
}
