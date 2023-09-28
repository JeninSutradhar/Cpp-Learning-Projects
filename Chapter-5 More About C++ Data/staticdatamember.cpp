#include <iostream>

using namespace std;

class BankAccount {
private:
  string ownerName;
  double balance;
  static double interestRate;
public:
  BankAccount(string name, double init_balance) {
    ownerName = name;
    balance = init_balance;
  }
  void deposit(double amount) {
    balance += amount;
  }
  void withdraw(double amount) {
    balance -= amount;
  }
  double getBalance() {
    return balance;
  }
  static void setInterestRate(double rate) {
    interestRate = rate;
  }
  static double getInterestRate() {
    return interestRate;
  }
};

double BankAccount::interestRate = 0.01; // initializing static data member

int main() {
  BankAccount account1("Alice", 1000.0);
  BankAccount account2("Bob", 500.0);

  cout << "Account 1 balance: " << account1.getBalance() << endl;
  cout << "Account 2 balance: " << account2.getBalance() << endl;

  BankAccount::setInterestRate(0.02); // setting static data member
  cout << "Interest rate: " << BankAccount::getInterestRate() << endl;

  account1.deposit(500.0);
  account2.withdraw(100.0);

  cout << "Account 1 balance after deposit: " << account1.getBalance() << endl;
  cout << "Account 2 balance after withdrawal: " << account2.getBalance() << endl;

  return 0;
}
