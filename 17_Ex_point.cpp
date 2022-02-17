#include <iostream>
#include <cmath>
using namespace std;

class Point
{
public:
    double x, y;
    Point(double a, double b)
    {
        x = a;
        y = b;
    }
    void dipslayPoint(void)
    {
        cout << "The Point is (" << x << " , " << y << ")" << endl;
    }
};

int main()
{
    float distance;
    Point a1(12, 14), a2(19, 19);
    a1.dipslayPoint();
    a2.dipslayPoint();

    distance = sqrt(pow(a2.x - a1.x, 2) + pow(a2.y - a1.y, 2));
    cout << "Distance Between Point (" << a1.x << " , " << a1.y << ") and (" << a2.x << " , " << a2.y << ") is :- " << distance << endl;

    return 0;
}