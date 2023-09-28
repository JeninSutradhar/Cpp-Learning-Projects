#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    double balance;

public:
    BankAccount(const std::string& accNumber, double initialBalance)
        : accountNumber(accNumber), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << " into account " << accountNumber << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << " from account " << accountNumber << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient balance." << std::endl;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount savingsAccount("SAV12345", 1000.0);
    BankAccount checkingAccount("CHK67890", 500.0);

    std::cout << "Savings Account Balance: $" << savingsAccount.getBalance() << std::endl;
    std::cout << "Checking Account Balance: $" << checkingAccount.getBalance() << std::endl;

    savingsAccount.deposit(500.0);
    checkingAccount.withdraw(200.0);

    std::cout << "Updated Savings Account Balance: $" << savingsAccount.getBalance() << std::endl;
    std::cout << "Updated Checking Account Balance: $" << checkingAccount.getBalance() << std::endl;

    return 0;
}
