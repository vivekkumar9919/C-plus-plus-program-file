#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "Enter the id of employee " << endl;
        cin >> id;
        count++;
    }

    void getdata()
    {
        cout << "The id of employee is " << id << " and this is employee number is " << count << endl;
        cout << id << endl;
    }

    // Static member function
    // Static member function have access of static member or variable only

    static void getcount()
    {
        // cout<<id <<endl;
        // above code show a error because id is not a static member
        cout << "Value of count is " << count << endl;
    }
};
// static variable
// static variable is also called a class variable and it is attached with class
// it is shared by all the class object
// in static variable memory is allocated only onces and values is modify by all the objects
// here count is static data members
int Employee ::count;

int main()
{
    Employee vk, hk, kk;
    vk.setdata();
    vk.getdata();
    // vk.setdata();
    // vk.getdata();
    Employee ::getcount();

    hk.setdata();
    hk.getdata();
    Employee ::getcount();

    kk.setdata();
    kk.getdata();
    Employee ::getcount();
    return 0;
}