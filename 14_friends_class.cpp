#include <iostream>
using namespace std;

class Complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    // function should not be define here otherwise show a error
    // function definitio should be done at the last of main class
    int sumRealcomplex(Complex, Complex);
    int sumCompcomplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // individually declaring function as friends
    
    // friend int calculator ::sumRealcomplex(Complex o1, Complex o2);
    // friend int calculator ::sumCompcomplex(Complex o1, Complex o2);
    
    // or

    // Declaring the entire class as friends
    friend class calculator;

public:
    void setcomplex(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printComplex()
    {
        cout << "Complex Number is :- " << a << " + " << b << "i" << endl;
    }
    void sumOfComplex()
    {
        cout << "Sum of Complex Number is :- " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumCompcomplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    calculator calc;
    o1.setcomplex(1, 4);
    o2.setcomplex(4, 6);

    int res = calc.sumRealcomplex(o1, o2);
    cout << "The sum of Real Part of Complex is :- " << res << endl;

    int res2 = calc.sumCompcomplex(o1, o2);
    cout << "The sum of Complex Part of Complex is :- " << res2 << endl;

    return 0;
}