#include <iostream>
using namespace std;

class baseClass
{
public:
    int var1;
    void display()
    {
        cout << "The base class variable var1 is " << var1 << endl;
    }
};

class DerivedClass : public baseClass
{
public:
    int var2;
    void display()
    {
        cout << "The derived class variable var1 is " << var2 << endl;
    }
};
int main()
{
    baseClass *base_class_pointer;
    baseClass obj_base;
    DerivedClass obj_derived;
    // base class pointer can point derived class object
    base_class_pointer = &obj_derived;
    base_class_pointer->var1=34;
    base_class_pointer->display();


    // below statement will not work
    // base_class_pointer->var2;
    // base_class_pointer->display2();
    
    /*
    we have declare a base class pointer so we can access only base class 
    variable and method . we can not access derived class variable and method
    no matter we pointed base class pointer to derived class
    */

   DerivedClass*derived_pointer;
   DerivedClass obj_;
   derived_pointer=&obj_;
   derived_pointer->var2=100;
   derived_pointer->display();

    return 0;
}