#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void SetNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Number is :- " << a << " + " << b << "i" << endl;
    }

    Complex(int x, int y);
};

Complex::Complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    // implicit call
    Complex a1(23, 25);
    a1.printNumber();

    // Explicit call
    Complex b = Complex(30, 49);
    b.printNumber();

    return 0;
}