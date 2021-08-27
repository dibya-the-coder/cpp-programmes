#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void); //constructed declaration
    void printData(void)
    {
        cout << "the no. is: " << a << " + " << b << "i" << endl;
    }
};
complex::complex(void) //this is just a default constructor
{
    a = 0;
    b = 0;
};
int main()
{
    complex c;
    c.printData();
    return 0;
}