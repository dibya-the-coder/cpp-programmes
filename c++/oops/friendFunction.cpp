#include <iostream>
using namespace std;
class complex
{

    int a, b;

public:
    friend complex sumComplex(complex o1, complex o2);
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    };
    void printNum()
    {
        cout << "your no is " << a << " + " << b << "i" << endl;
    }
};
complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNum((o1.a + o2.a), (o1.b + o2.b));
    //it means first + first   or second + secont from the arguments of setNum methord
    return o3;
};

int main()
{
    complex c1, c2, sum;
    c1.setNum(1, 4);
    c1.printNum();

    c2.setNum(5, 8);
    c2.printNum();

    sum = sumComplex(c1, c2);
    sum.printNum();

    return 0;
}