#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "Good morning";
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Good Afternoon";
    }
};

class Derived : public Base1, public Base2
{
    int a;
    // when a class is derived from mulitple class and base class have a same method then compiler will show ambiguity error;
    // how to reomve a ambiguity is given below
public:
    // to use base1 classs
    // void greet(){
    //     Base1::greet();
    // }

    
    // to use base2 classs
    void greet()
    {
        Base2::greet();
    }
};

int main()
{
    Derived derivedObj;

    derivedObj.greet();

    return 0;
}