// Including Libraries
#include <iostream>

// namespace
using namespace std;

/////////////////
// class - Myclass

class MyClass
{
private:
    int secretnumber;

public:
    MyClass(int num)
    {
        secretnumber = num;
    }
    friend void revealsecret(MyClass obj);
};

void revealsecret(MyClass obj) // Friendly function
{
    cout << "The secret number is: " << obj.secretnumber << endl;
}

///////////////////
// The main function

int main()
{
    MyClass myobj(42);
    revealsecret(myobj);

    return 0;
}