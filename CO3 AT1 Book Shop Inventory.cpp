#include <iostream>
using namespace std;

class Books
{
    string author, title, publisher;
    double price;
    int stock;

    void updatePrice(double p)
    {
        price = p;
    }

public:
    static int success;
    static int fail;

    Books(string a, string t, string pub, double p, int s)
    {
        author = a;
        title = t;
        publisher = pub;
        price = p;
        stock = s;
    }

    void searchBook(string t, string a)
    {
        if (title == t && author == a)
        {
            cout << "\nBook Available\n";
            cout << "Title : " << title;
            cout << "\nAuthor : " << author;
            cout << "\nPrice : " << price;
            cout << "\nStock : " << stock;

            int req;
            cout << "\nEnter Required Copies : ";
            cin >> req;

            if (req <= stock)
            {
                cout << "Total Cost = " << req * price << endl;
                stock -= req;
                success++;
            }
            else
            {
                cout << "Required copies not in stock\n";
                fail++;
            }
        }
        else
        {
            cout << "Book Not Found\n";
            fail++;
        }
    }
};

int Books::success = 0;
int Books::fail = 0;

int main()
{
    Books b("R.K.Narayan", "Malgudi", "ABC", 500, 10);

    string title, author;

    cin.ignore();
    cout << "Enter Title : ";
    getline(cin, title);

    cout << "Enter Author : ";
    getline(cin, author);

    b.searchBook(title, author);

    cout << "\nSuccessful Transactions : "
         << Books::success;

    cout << "\nUnsuccessful Transactions : "
         << Books::fail;

    return 0;
}
