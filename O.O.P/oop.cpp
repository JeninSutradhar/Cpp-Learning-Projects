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
    Employee( string name, string company, int age ) 
    {
        this->name = name;
        this->company = company;
        this->age = age;
    }
};

int main()
{
    // declaring Employee
    Employee employee1 = Employee("rakes", "RSb", 25);
    employee1.IntroduceYourself();
    
    //second Employee 
    Employee employee2 = Employee("pappu", "Ballebaaj", 31);
    employee2.IntroduceYourself();
    
    return 0;
}
