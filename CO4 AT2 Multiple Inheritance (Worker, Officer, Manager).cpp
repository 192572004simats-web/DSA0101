#include <iostream>
using namespace std;

class Worker
{
protected:
    int code;
    string name;
    float salary;

public:
    void getWorker()
    {
        cout << "Enter Code: ";
        cin >> code;

        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Salary: ";
        cin >> salary;
    }
};

class Officer
{
protected:
    float DA, HRA;

public:
    void getOfficer()
    {
        cout << "Enter DA: ";
        cin >> DA;

        cout << "Enter HRA: ";
        cin >> HRA;
    }
};

class Manager : public Worker, public Officer
{
    float TA;
    float gross_sal;

public:
    void calculate()
    {
        TA = salary * 0.10;
        gross_sal = salary + DA + HRA + TA;
    }

    void display()
    {
        cout << "\nCode: " << code;
        cout << "\nName: " << name;
        cout << "\nSalary: " << salary;
        cout << "\nDA: " << DA;
        cout << "\nHRA: " << HRA;
        cout << "\nTA: " << TA;
        cout << "\nGross Salary: " << gross_sal;
    }
};

int main()
{
    Manager m;

    m.getWorker();
    m.getOfficer();

    m.calculate();
    m.display();

    return 0;
}
