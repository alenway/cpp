#include <iostream>
#include <string>

class BankAccount
{
private:
    double balance;

public:
    void setBalance(double amount)
    {
        balance = amount;
    }
    int getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount account;
    account.setBalance(30000);
    std::cout << "the balance is: " << account.getBalance() << std::endl;

    return 0;
}
