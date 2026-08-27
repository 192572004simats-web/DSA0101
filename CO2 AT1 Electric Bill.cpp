#include <iostream>
using namespace std;

class ElectricBill
{
    string n;
    int units;
    double bill;

public:
    void accept()
    {
        cin.ignore();
        cout << "Enter Customer Name: ";
        getline(cin, n);

        cout << "Enter Units Consumed: ";
        cin >> units;
    }

    void calculate()
    {
        if (units <= 100)
        {
            bill = units * 2;
        }
        else if (units <= 300)
        {
            bill = (100 * 2) + ((units - 100) * 3);
        }
        else
        {
            bill = (100 * 2) + (200 * 3) + ((units - 300) * 5);
            bill = bill + (bill * 0.025);
        }
    }

    void print()
    {
        cout << "\nCustomer Name : " << n;
        cout << "\nUnits Consumed : " << units;
        cout << "\nBill Amount : " << bill;
    }
};

int main()
{
    ElectricBill e;

    e.accept();
    e.calculate();
    e.print();

    return 0;
}
