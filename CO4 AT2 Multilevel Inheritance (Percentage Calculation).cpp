#include <iostream>
using namespace std;

class Marks
{
protected:
    int m1, m2, m3;

public:
    void getMarks()
    {
        cout << "Enter 3 Subject Marks : ";
        cin >> m1 >> m2 >> m3;
    }
};

class Total : public Marks
{
protected:
    int total;

public:
    void findTotal()
    {
        total = m1 + m2 + m3;
    }
};

class Percentage : public Total
{
    float per;

public:
    void calculate()
    {
        per = total / 3.0;
    }

    void display()
    {
        cout << "\nTotal = " << total;
        cout << "\nPercentage = " << per << "%";
    }
};

int main()
{
    Percentage p;

    p.getMarks();
    p.findTotal();
    p.calculate();
    p.display();

    return 0;
}
