#include <iostream>
using namespace std;

class FLOAT
{
    float num;

public:
    FLOAT(float n = 0)
    {
        num = n;
    }

    FLOAT operator+(FLOAT f)
    {
        return FLOAT(num + f.num);
    }

    FLOAT operator-(FLOAT f)
    {
        return FLOAT(num - f.num);
    }

    FLOAT operator*(FLOAT f)
    {
        return FLOAT(num * f.num);
    }

    FLOAT operator/(FLOAT f)
    {
        return FLOAT(num / f.num);
    }

    void display()
    {
        cout << num << endl;
    }
};

int main()
{
    FLOAT a(20), b(10);

    FLOAT c;

    c = a + b;
    cout << "Addition = ";
    c.display();

    c = a - b;
    cout << "Subtraction = ";
    c.display();

    c = a * b;
    cout << "Multiplication = ";
    c.display();

    c = a / b;
    cout << "Division = ";
    c.display();

    return 0;
}
