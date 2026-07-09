#include <iostream>
#include "Bank.hpp"

int main(){
  //TEST
  Bank BankOfSantos;
    
  BankOfSantos.createAccount("1001", 5000.00);
  BankOfSantos.createAccount("1002", 3000.00);
  BankOfSantos.createAccount("1003", 2500.00);

  BankAccount* account1 = BankOfSantos.findAccount("1001");
  BankAccount* account2 = BankOfSantos.findAccount("1002");
  BankAccount* account3 = BankOfSantos.findAccount("1003");

  BankAccount::Transaction transaction1;
  transaction1.deposit(*account1, 1000.00);

  BankAccount::Transaction transaction2;
  transaction2.withdraw(*account2, 500.00);

  BankAccount::Transaction transaction3;
  transaction3.transferMoney(*account1, *account2, 1000.00);
  return 0;
}
