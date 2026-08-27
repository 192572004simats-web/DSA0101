#include <iostream>
using namespace std;

class ShowRoom
{
    string name;
    long long mobno;
    double cost, dis, amount;

public:
    void input()
    {
        cin.ignore();
        cout << "Enter Customer Name: ";
        getline(cin, name);

        cout << "Enter Mobile Number: ";
        cin >> mobno;

        cout << "Enter Cost: ";
        cin >> cost;
    }

    void calculate()
    {
        if (cost <= 10000)
            dis = cost * 0.05;
        else if (cost <= 20000)
            dis = cost * 0.10;
        else if (cost <= 35000)
            dis = cost * 0.15;
        else
            dis = cost * 0.20;

        amount = cost - dis;
    }

    void display()
    {
        cout << "\nCustomer Name : " << name;
        cout << "\nMobile Number : " << mobno;
        cout << "\nAmount to Pay : " << amount;
    }
};

int main()
{
    ShowRoom s;

    s.input();
    s.calculate();
    s.display();

    return 0;
}
