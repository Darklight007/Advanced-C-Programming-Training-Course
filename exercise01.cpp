#include <iostream>
#include <sstream>

using namespace std;

class Account
{
protected:
    double balance{0};

public:
    Account() {}
    Account(double balance) : balance{balance}
    {
    }
    void credit(double amoount)
    {
        balance += amoount;
    }
    void debit(double amount)
    {
        if (balance > amount)
        {
            balance -= amount;
        }
        else
            cout << "Insufficient funds." << endl;
    }

    double getBalance()
    {
        return balance;
    }
    ~Account() {}
};

class CheckingAccount : public Account
{

private:
    double fee;

public:
    CheckingAccount(double bal, double f) : Account(bal)
    {
        fee = f;
    }

    void debit (double amount){
        if (balance > amount){
            
            balance-=amount+fee;

        }
        else
        cout << "Insufficient fund"<<endl;
    }
};

int main()
{

    Account acc1;

    CheckingAccount myacc(500,.5);

myacc.credit(100);
cout << "Balance:"<< myacc.getBalance()<<endl;
myacc.debit(50);
cout << "Balance:"<< myacc.getBalance()<<endl;


    return 0;
}