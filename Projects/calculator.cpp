#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2, result;
    
    cout << "Enter operator either + or - or * or /: ";
    cin >> op;
    
    cout << "Enter first operand: ";
    cin >> num1;
    
    cout << "Enter second operand: ";
    cin >> num2;
    
    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        
        case '-':
            result = num1 - num2;
            break;
            
        case '*':
            result = num1 * num2;
            break;
            
        case '/':
            if (num2 == 0) {
                cout << "Error: division by zero";
                return 1;
            }
            result = num1 / num2;
            break;
            
        default:
            cout << "Invalid operator";
            return 1;
    }
    
    cout << num1 << " " << op << " " << num2 << " = " << result;
    
    return 0;
}
