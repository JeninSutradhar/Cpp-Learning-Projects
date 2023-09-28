#include <iostream>
#include <string>

class MyClass {
public:
    MyClass(const std::string& str) {
        m_str = new char[str.length() + 1];
        strcpy(m_str, str.c_str());
    }
    
    // Copy constructor
    MyClass(const MyClass& other) {
        m_str = new char[strlen(other.m_str) + 1];
        strcpy(m_str, other.m_str);
    }
    
    ~MyClass() {
        delete[] m_str;
    }
    
private:
    char* m_str;
};

int main() {
    MyClass obj1("Hello");
    MyClass obj2 = obj1; // Uses the copy constructor
    
    return 0;
}
