#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void printData(void)
    {
        cout << " value of a is " << a << " and b is " << b << endl;
    }
    complex(void);
};
complex::complex(void)
{
    a = 10;
    b = 20;
};

int main()
{
    complex c, d, e;
    c.printData();
    d.printData();
    e.printData();
    return 0;
}