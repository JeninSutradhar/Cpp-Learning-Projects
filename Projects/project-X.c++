#include <iostream>

using namespace std;

class Employee
{
public:
    string name;
    string company;
    int age;

    void IntroduceYourself()
    {
        cout << "NAME - " << name << endl
             << "COMPANY - " << company << endl
             << "AGE - " << age << endl;
    }
    Employee(string name, string company, int age)
    {
        name = name;
        company = company;
        age = age;
    }
};

int main()
{
    // declaring Employee
    Employee employee1;
    employee1.name = "Millionaire Rakesh";
    employee1.company = "Real Estate business";
    employee1.age = 25;
    employee1.IntroduceYourself();

    // second Employee
    Employee employee2;
    employee2.name = "Millionaire Pappu";
    employee2.company = "Real Estate business";
    employee2.age = 23;
    employee2.IntroduceYourself();

    return 0;
}
