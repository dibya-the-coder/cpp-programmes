#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; };
    void SetItem(void);
    void displayItem(void);
};
void shop::SetItem(void)
{
    cout << "enter the id of your item no: " << counter + 1 << endl;
    cin >> itemId[counter];

    cout << "enter the Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
};
void shop::displayItem(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id is" << itemId[i] << " is  " << itemId[i] << endl;
    }
}

int main()
{
    shop dukan;
    dukan.initCounter();
    dukan.SetItem();
    dukan.SetItem();
    dukan.displayItem();

    return 0;
}