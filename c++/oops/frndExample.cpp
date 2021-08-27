#include <iostream>
using namespace std;
class c2;
class c1
{
    int val;
    friend void exchange(c1 &, c2 &);

public:
    void inData(int a)
    {
        val = a;
    }
    void display(void)
    {
        cout << val << endl;
    }
};
class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void inData(int b)
    {
        val2 = b;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};
void exchange(c1 &x, c2 &y)
{
    int tem = x.val;
    x.val = y.val2;
    y.val2 = tem;
};

int main()
{
    c1 oc1;
    c2 oc2;
    oc1.inData(44);
    oc2.inData(7);
    cout << "the value after execute becomes: ";
    oc1.display();
    oc2.display();
    exchange(oc1, oc2);
    cout << "the value after execute becomes: ";
    oc1.display();
    oc2.display();

    return 0;
}