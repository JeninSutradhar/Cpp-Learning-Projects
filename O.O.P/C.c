#include <stdio.h>
#include <string.h>

// Define a structure to represent a bank account
struct BankAccount {
    char accountNumber[20];
    double balance;
};

// Function to initialize a bank account
void initBankAccount(struct BankAccount *account, const char *accNumber, double initialBalance) {
    strncpy(account->accountNumber, accNumber, sizeof(account->accountNumber));
    account->balance = initialBalance;
}

// Function to deposit money into an account
void deposit(struct BankAccount *account, double amount) {
    if (amount > 0) {
        account->balance += amount;
        printf("Deposited $%.2f into account %s\n", amount, account->accountNumber);
    } else {
        printf("Invalid deposit amount.\n");
    }
}

// Function to withdraw money from an account
void withdraw(struct BankAccount *account, double amount) {
    if (amount > 0 && account->balance >= amount) {
        account->balance -= amount;
        printf("Withdrawn $%.2f from account %s\n", amount, account->accountNumber);
    } else {
        printf("Invalid withdrawal amount or insufficient balance.\n");
    }
}

// Function to get the balance of an account
double getBalance(const struct BankAccount *account) {
    return account->balance;
}

int main() {
    struct BankAccount savingsAccount;
    struct BankAccount checkingAccount;

    initBankAccount(&savingsAccount, "SAV12345", 1000.0);
    initBankAccount(&checkingAccount, "CHK67890", 500.0);

    printf("Savings Account Balance: $%.2f\n", getBalance(&savingsAccount));
    printf("Checking Account Balance: $%.2f\n", getBalance(&checkingAccount));

    deposit(&savingsAccount, 500.0);
    withdraw(&checkingAccount, 200.0);

    printf("Updated Savings Account Balance: $%.2f\n", getBalance(&savingsAccount));
    printf("Updated Checking Account Balance: $%.2f\n", getBalance(&checkingAccount));

    return 0;
}
