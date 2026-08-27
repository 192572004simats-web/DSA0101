#include <iostream>
using namespace std;

class Person
{
protected:
    string name, address;
    long long phone_no;

public:
    void getPerson()
    {
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Address: ";
        getline(cin, address);

        cout << "Enter Phone Number: ";
        cin >> phone_no;
    }

    void displayPerson()
    {
        cout << "\nName: " << name;
        cout << "\nAddress: " << address;
        cout << "\nPhone No: " << phone_no;
    }
};

class Employee : public Person
{
    int eno;
    string ename;

public:
    void getEmployee()
    {
        getPerson();

        cout << "Enter Employee Number: ";
        cin >> eno;

        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, ename);
    }

    void displayEmployee()
    {
        displayPerson();
        cout << "\nEmployee No: " << eno;
        cout << "\nEmployee Name: " << ename << endl;
    }
};

class Manager : public Person
{
public:
    string designation;
    string department_name;
    double basic_salary;

    void getManager()
    {
        getPerson();

        cin.ignore();
        cout << "Enter Designation: ";
        getline(cin, designation);

        cout << "Enter Department: ";
        getline(cin, department_name);

        cout << "Enter Basic Salary: ";
        cin >> basic_salary;
    }

    void displayManager()
    {
        displayPerson();
        cout << "\nDesignation: " << designation;
        cout << "\nDepartment: " << department_name;
        cout << "\nBasic Salary: " << basic_salary << endl;
    }
};

int main()
{
    int n;

    cout << "Enter Number of Employees: ";
    cin >> n;

    Employee e[10];
    Manager m[10];

    for(int i=0;i<n;i++)
    {
        cout << "\nEnter Employee Details\n";
        e[i].getEmployee();
    }

    for(int i=0;i<n;i++)
    {
        cout << "\nEnter Manager Details\n";
        m[i].getManager();
    }

    cout << "\nEmployee Details\n";
    for(int i=0;i<n;i++)
        e[i].displayEmployee();

    cout << "\nManager Details\n";
    for(int i=0;i<n;i++)
        m[i].displayManager();

    int maxIndex = 0;

    for(int i=1;i<n;i++)
    {
        if(m[i].basic_salary > m[maxIndex].basic_salary)
            maxIndex = i;
    }

    cout << "\nManager With Highest Salary\n";
    m[maxIndex].displayManager();

    return 0;
}
