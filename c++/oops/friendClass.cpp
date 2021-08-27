#include <iostream>
using namespace std;
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};

class complex
{
    int a, b;
    // this below method is for accessing the functions individually
    // friend int calculator::sumRealComplex(complex o1, complex o2);
    // friend int calculator::sumCompComplex(complex o1, complex o2);
    friend class calculator; //in this methord complex class is accessable by whole functions of calculator

public:
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    };
    void printNum()
    {
        cout << "your no. is: " << a << " + " << b << "i" << endl;
    }
};
int calculator::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
};
int calculator::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
};

int main()
{
    complex o1, o2;
    o1.setNum(6, 5);
    o2.setNum(7, 4);
    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    int res2 = calc.sumCompComplex(o1, o2);
    cout << "sum of real part is: " << res << endl;
    cout << "sum o0f complex part is: " << res2 << "i" << endl;
    return 0;
}