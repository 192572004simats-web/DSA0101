#include <iostream>
using namespace std;

class BankAccount
{
    string name, type;
    int accno;
    double balance;

public:
    BankAccount(string n, int a, string t, double b)
    {
        name = n;
        accno = a;
        type = t;
        balance = b;
        cout << "Account Created\n";
    }

    void deposit(int ano, string n, double amt)
    {
        if (accno == ano && name == n)
        {
            balance += amt;
            cout << "Amount Deposited Successfully\n";
        }
        else
        {
            cout << "Invalid Account Details\n";
        }
    }

    void withdraw(double amt)
    {
        if (amt <= balance)
        {
            balance -= amt;
            cout << "Withdrawal Successful\n";
        }
        else
        {
            cout << "Insufficient Balance\n";
        }
    }

    void display()
    {
        cout << "\nName : " << name;
        cout << "\nBalance : " << balance << endl;
    }

    ~BankAccount()
    {
        cout << "Account Closed\n";
    }
};

int main()
{
    BankAccount b("Ravi", 101, "Savings", 5000);

    b.deposit(101, "Ravi", 2000);
    b.withdraw(1000);
    b.display();

    return 0;
}
