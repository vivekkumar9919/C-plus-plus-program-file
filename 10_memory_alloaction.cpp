#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setprice(void);
    void displayprice(void);
};

void Shop ::setprice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of Item With Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    int n;
    cout << "Enter total number of Item in shop " << endl;
    cin >> n;
    Shop shopobject;
    shopobject.initcounter();
    for (int i = 0; i < n; i++)
    {
        shopobject.setprice();
    }

    shopobject.displayprice();

    return 0;
}