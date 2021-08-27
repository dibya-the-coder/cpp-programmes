#include <iostream>
using namespace std;

class y;
class x
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    };
    friend void add(x, y);
};
class y
{
    int num;
    friend void add(x, y);

public:
    void setValue(int value)
    {
        num = value;
    }
};
void add(x o1, y o2)
{
    cout << "summimng the datas of x and y objects gives me: " << o1.data + o2.num << endl;
}

int main()
{
    x a;
    a.setValue(9);
    y b;
    b.setValue(5);
    add(a, b);

    return 0;
}