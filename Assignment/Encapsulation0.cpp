#include <iostream>

using namespace std;

class BankAccount {
private:
  string accountNumber;
  double balance;

public:
  BankAccount(string accountNumber, double balance) {
    this->accountNumber = accountNumber;
    this->balance = balance;
  }

  string getAccountNumber() {
    return accountNumber;
  }

  double getBalance() {
    return balance;
  }

  void deposit(double amount) {
    this->balance += amount;
  }

  void withdraw(double amount) {
    if (amount <= this->balance) {
      this->balance -= amount;
    } else {
      cout << "Insufficient funds." << endl;
    }
  }
};

int main() {
  BankAccount account("1234567890", 1000.00);

  cout << "Account number: " << account.getAccountNumber() << endl;
  cout << "Balance: $" << account.getBalance() << endl;

  account.deposit(500.00);

  cout << "Balance: $" << account.getBalance() << endl;

  account.withdraw(100.00);

  cout << "Balance: $" << account.getBalance() << endl;

  return 0;
}
