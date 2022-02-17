// #include <iostream>
// using namespace std;
// class SameClass
// {
//     int var;

// public:
//     void setdata(int var)
//     {
//         var = var;
//     }
//     void getdata()
//     {
//         cout << "The value of a is " << var << endl;
//     }
// };
// int main()
// {
//     SameClass var;
//     var.setdata(4);
//     var.getdata();

//     return 0;
// }

// In above code var will show the garbage value because in setdata function
// global var is not used its uses local var

// so we use this pointer to assign var to global val


#include <iostream>
using namespace std;
class SameClass
{
    int var;

public:
    void setdata(int var)
    {
        this->var = var;
    }
    void getdata()
    {
        cout << "The value of a is " << var << endl;
    }
};
int main()
{
    SameClass var;
    var.setdata(4);
    var.getdata();

    return 0;
}

