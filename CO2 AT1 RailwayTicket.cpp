#include <iostream>
using namespace std;

class RailwayTicket
{
    string name, coach;
    long long mobno;
    int amt, totalamt;

public:
    void accept()
    {
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Coach (First_AC/Second_AC/Third_AC/sleeper): ";
        cin >> coach;

        cout << "Enter Mobile Number: ";
        cin >> mobno;

        cout << "Enter Basic Amount: ";
        cin >> amt;
    }

    void update()
    {
        totalamt = amt;

        if (coach == "First_AC")
            totalamt += 700;
        else if (coach == "Second_AC")
            totalamt += 500;
        else if (coach == "Third_AC")
            totalamt += 250;
    }

    void display()
    {
        cout << "\nName : " << name;
        cout << "\nCoach : " << coach;
        cout << "\nMobile No : " << mobno;
        cout << "\nTotal Amount : " << totalamt;
    }
};

int main()
{
    RailwayTicket r;

    r.accept();
    r.update();
    r.display();

    return 0;
}
