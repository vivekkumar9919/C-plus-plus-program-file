#include <iostream>
using namespace std;

class Point
{
public:
    int x, y;
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    Point(int a)
    {
        x = a;
        y = 0;
    }
    void display()
    {
        cout << "The Point is (" << x << " , " << y << ")" << endl;
    }
};

int main()
{
    Point a1(23, 24);
    a1.display();

    Point a2(100);
    a2.display();

    return 0;
}