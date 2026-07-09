#include <vector>
#include "BankAccount.hpp"

class Bank {
  private:
    std::vector<BankAccount*> allAccounts;
  
  public:
    void createAccount(string accountNumber, double initBalance);
    BankAccount* findAccount(string accountNumber);

};
