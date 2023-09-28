#include <iostream>

using namespace std;

// Employee class 
class Employee {
    private:
        int a;
        int b;
        int c;
    public:
        int d;
        int e;
        // void function     
        void setdata(int a1, int b1, int c1);
        void getdata(){
            cout << "The value of a is: " << a << endl;
            cout << "The value of b is: " << b << endl;
            cout << "The value of c is: " << c << endl;
            cout << "The value of d is: " << d << endl;
            cout << "The value of e is: " << e << endl;
        }
};

void Employee::setdata(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

//the main function
int main() {
    Employee Jenin;
    Jenin.setdata(1,2,4);
    Jenin.d = 3;
    Jenin.e = 5;
    Jenin.getdata();
    
    return 0;
}

