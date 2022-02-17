#include <iostream>
using namespace std;

template <class T1, class T2>
float funcaverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
int main()
{
    float a;
    a = funcaverage(4, 4.76);
    cout << a << endl;
    return 0;
}