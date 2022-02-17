#include <iostream>
using namespace std;

class Base1
{
protected:
    int baseint1;

public:
    void set_baseint1(int a)
    {
        baseint1 = a;
    }
};
class Base2
{
protected:
    int baseint2;

public:
    void set_baseint2(int a)
    {
        baseint2 = a;
    }
};

class Derived : public Base1, public Base2
{

public:
    void show()
    {
        cout << "The Valve of Base1 is " << baseint1 << endl;
        cout << "The Valve of Base2 is " << baseint2 << endl;
    }
};

int main()
{
    Derived obj1;
    obj1.set_baseint1(23);
    obj1.set_baseint2(48);
    obj1.show();

    return 0;
}