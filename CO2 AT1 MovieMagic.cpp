#include <iostream>
using namespace std;

class MovieMagic
{
    int year;
    string title;
    float rating;

public:
    void accept()
    {
        cout << "Enter Year: ";
        cin >> year;

        cin.ignore();
        cout << "Enter Title: ";
        getline(cin, title);

        cout << "Enter Rating (0-5): ";
        cin >> rating;
    }

    void display()
    {
        cout << "\nMovie Title: " << title << endl;

        if (rating >= 0.0 && rating <= 2.0)
            cout << "Flop";
        else if (rating <= 3.4)
            cout << "Semi-hit";
        else if (rating <= 4.5)
            cout << "Hit";
        else
            cout << "Super Hit";
    }
};

int main()
{
    MovieMagic m;
    m.accept();
    m.display();

    return 0;
}
