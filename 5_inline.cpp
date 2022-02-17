#include <iostream>
using namespace std;

inline int addition(int a, int b)
{
    return a + b;
}
inline int multiply(int a, int b)
{
    return a * b;
}
inline int sub(int a, int b)
{
    return a - b;
}
    inline float divi(int a, int b){
        return a / b;
    }


int main()
{
    int n1, n2;
    cout << "enter the 1st number " << endl;
    cin >> n1;
    cout << "enter the 2nd number " << endl;
    cin >> n2;

    cout << "sum of number is " << addition(n1, n2) << endl;
    cout << "multiply of number is " << multiply(n1, n2) << endl;
    cout << "substraction  of number is " << sub(n1, n2) << endl;
    cout << "division of number is " << divi(n1, n2) << endl;


    return 0;
}