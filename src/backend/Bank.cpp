#include "Bank.hpp"
#include <iostream>
#include <algorithm>

void Bank::createAccount(string accountNumber, double initBalance){
  allAccounts.push_back(new BankAccount(accountNumber, initBalance));
}

BankAccount* Bank::findAccount(string accountNumber){
  for (auto account : allAccounts){
    if(account->getAccountNumber() == accountNumber){
	    return account;
    }
  }
  return nullptr;
}

