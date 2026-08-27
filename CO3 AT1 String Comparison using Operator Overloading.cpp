#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char str[100];

public:
    void input()
    {
        cin.getline(str, 100);
    }

    bool operator==(String s)
    {
        return strcmp(str, s.str) == 0;
    }

    bool operator>(String s)
    {
        return strcmp(str, s.str) > 0;
    }

    bool operator<(String s)
    {
        return strcmp(str, s.str) < 0;
    }
};

int main()
{
    String s1, s2;

    cout << "Enter First String : ";
    s1.input();

    cout << "Enter Second String : ";
    s2.input();

    if (s1 == s2)
        cout << "Strings are Equal\n";
    else if (s1 > s2)
        cout << "First String is Greater\n";
    else
        cout << "Second String is Greater\n";

    return 0;
}
