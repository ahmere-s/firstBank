#include "BankAccount.hpp"

BankAccount::BankAccount(string account, double balance) : accountNumber(account), balance(balance) {
	  
}

string BankAccount::getAccountNumber(){
  return accountNumber;
}

double BankAccount::getBalance(){
  return balance;
}

void BankAccount::setAccountNumber(string num){
  accountNumber = num;
}

void BankAccount::setBalance(double amount){
  balance = amount;
}

void BankAccount::Transaction::deposit(BankAccount& account, double amount){
  account.balance += amount;
}

void BankAccount::Transaction::withdraw(BankAccount& account, double amount){
  account.balance -= amount;
}

int BankAccount::Transaction::transferMoney(BankAccount& sourceFrom, BankAccount& targetTo, double amount){
  if (&sourceFrom == nullptr || &targetTo == nullptr){
    std::cout << "account not found." << "\n";
    return 2;
  }

  if (amount > sourceFrom.getBalance()){
    return 3;
  }
  else{
    sourceFrom.balance -= amount;
    targetTo.balance += amount;
    std::cout << "Transfer Successful" << "\n";
    return 1;
  }

} 
