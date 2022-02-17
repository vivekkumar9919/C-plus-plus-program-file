#include <iostream>
using namespace std;

template <class datatype>
class calc
{
    datatype a, b, c;

public:
    void setdata(datatype x, datatype y, datatype z)
    {
        a = x;
        b = y;
        c = z;
    }

    datatype add()
    {
        return a + b + c;
    }
   datatype mul()
    {
        return a * b * c;
    }
};

int main()
{
    calc <int>c1;
    c1.setdata(1, 2, 3);
    int addvar = c1.add();
    int mulvar = c1.mul();

    cout << addvar << endl;
    cout << mulvar << endl;

    calc <float>c2;
    c2.setdata(1.1, 2.2, 3);
    float addvar1 = c2.add();
    float mulvar1 = c2.mul();

    cout << addvar1 << endl;
    cout << mulvar1 << endl;


    return 0;
}