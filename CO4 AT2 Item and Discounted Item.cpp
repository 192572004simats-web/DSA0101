#include <iostream>
#include <iomanip>
using namespace std;

class Item
{
protected:
    int item_no;
    string name;
    float price;

public:
    void getItem()
    {
        cout << "Enter Item Number: ";
        cin >> item_no;

        cin.ignore();
        cout << "Enter Item Name: ";
        getline(cin, name);

        cout << "Enter Price: ";
        cin >> price;
    }
};

class DiscountedItem : public Item
{
    float discount_percent;
    float final_price;

public:
    void getData()
    {
        getItem();

        cout << "Enter Discount Percentage: ";
        cin >> discount_percent;

        final_price = price - (price * discount_percent / 100);
    }

    float getFinalPrice()
    {
        return final_price;
    }

    void display()
    {
        cout << left << setw(10) << item_no
             << setw(15) << name
             << setw(10) << price
             << setw(10) << discount_percent
             << setw(10) << final_price
             << endl;
    }
};

int main()
{
    int n;
    float total = 0;

    cout << "Enter Number of Items: ";
    cin >> n;

    DiscountedItem d[20];

    for(int i=0;i<n;i++)
    {
        cout << "\nEnter Item " << i+1 << " Details\n";
        d[i].getData();
    }

    cout << "\n--------------------------------------------------\n";
    cout << left << setw(10) << "ItemNo"
         << setw(15) << "Name"
         << setw(10) << "Price"
         << setw(10) << "Disc%"
         << setw(10) << "Amount" << endl;
    cout << "--------------------------------------------------\n";

    for(int i=0;i<n;i++)
    {
        d[i].display();
        total += d[i].getFinalPrice();
    }

    cout << "\nTotal Amount = " << total;

    return 0;
}
