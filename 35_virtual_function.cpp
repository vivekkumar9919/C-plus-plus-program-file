// #include<iostream>
// using namespace std;

// class baseClass
// {
// public:
//     int var1=100;
//     void display()
//     {
//         cout << "The base class variable var1 is " << var1 << endl;
//     }
// };

// class DerivedClass : public baseClass
// {
// public:
//     int var2=10;
//     void display()
//     {
//         cout << "The derived class variable var1 is " << var2 << endl;
//     }
// };

// int main(){
//     baseClass * base_ptr;
//     baseClass obj_base;
//     DerivedClass obj_derived;
//     base_ptr=&obj_derived;
//     base_ptr->display();
  
// return 0;
// }


#include<iostream>
using namespace std;

class baseClass
{
public:
    int var1=100;
    // by this base class pointer will point the derived class function
    virtual void display()
    {
        cout << "The base class variable var1 is " << var1 << endl;
    }
};

class DerivedClass : public baseClass
{
public:
    int var2=10;
    void display()
    {
        cout << "The derived class variable var1 is " << var2 << endl;
    }
};

int main(){
    baseClass * base_ptr;
    baseClass obj_base;
    DerivedClass obj_derived;
    base_ptr=&obj_derived;
    base_ptr->display();
  
return 0;
}