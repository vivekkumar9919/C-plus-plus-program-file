#include <iostream>
using namespace std;
 
    /*
 syntax for initialization list in constructor
 constructor (argument-list): initialization-section

 */

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor is called" << endl;
        cout << "The Value of a is " << a << endl;
        cout << "The Value of b is " << b << endl;
    }
};


int main()
{

    Test obj(45, 89);
    
    return 0;
}

