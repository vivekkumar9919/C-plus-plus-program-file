#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void Base ::setdata()
{
    data1 = 100;
    data2 = 20;
}
int Base ::getdata1()
{
    return data1;
}
int Base ::getdata2()
{
    return data2;
}

// derived class
class Derived : public Base
{
public:
    int data3;
    void process();
    void display();
};
void Derived::process()
{
    data3 = data2 * getdata2();
}
void Derived::display()
{
    cout << "value of data 1 is " << getdata1() << endl;
    cout << "value of data 2 is " << data2 << endl;
    cout << "value of data 3 is " << data3 << endl;
}

// another derived class
class Newclass : public Base
{
    int data4 = 500;

public:
    int add()
    {
        // int sum;
        return data2 + data4;
    }
};
int main()
{
    Derived dataobj;
    dataobj.setdata();
    dataobj.process();
    dataobj.display();

    Newclass addition;
    addition.setdata();
    cout << addition.add();

    return 0;
}