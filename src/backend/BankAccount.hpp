#include <string>
#include <iostream>

using namespace std;

class BankAccount {
  private:
    string accountNumber;
    double balance;
  
  public:
    BankAccount(string account, double balance);
    string getAccountNumber();
    double getBalance();
    void setAccountNumber(string num);
    void setBalance(double amount);
    
    class Transaction {
      private:

      public:
        void deposit(BankAccount& account, double amount);
	void withdraw(BankAccount& account, double amount);
	int transferMoney(BankAccount& sourceFrom, BankAccount& targetTo, double amount);

												    };
};
