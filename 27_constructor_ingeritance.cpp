#include <iostream>
using namespace std;
/*
Case1:
class B :class A{
    order of execution of constructor  first A() then B()
    base class constructor will run first
};
Case 2:
class A : public B ,Public C{
    oreder of execution of constructor
    when more then two base class is given then order of execution will be
    in order in which it is define.
};
case 3:
class A :public B ,virtual public C{
    oreder of execution of constructor C() then B() and A()
    virtual function have higher order
};
*/

class Base1{
    int data1;
    public:
    Base1(int i){
        data1=i;
        cout<<"base 1 class constructor is called"<<endl;
    }
    void print(){
        cout<<"the value of data is "<<data1<<endl;
    }
};
class Base2{
    int data2;
    public:
    Base2(int i){
        data2=i;
        cout<<"base 2 class constructor is called"<<endl;
    }
    void print(){
        cout<<"the value of data is "<<data2<<endl;
    }
};

class Derived: public Base1 , public Base2{
    int Ddata1, Ddata2;
    public:
    Derived(int a ,int b, int c,int d): Base1(a),Base2(b){
        Ddata1=c;
        Ddata2=d;
        cout<<"Derived class constructor is called"<<endl;
    }
    void printData(){

        cout<<"the value of  Derived data 1 is "<<Ddata1<<endl;
        cout<<"the value of Derived data 2 is "<<Ddata2<<endl;
    }
    // for ambiguity removal
    // void print(){
    //     Base2:print();
    // }
};
int main()
{
    Derived obj1(2,3,4,5);
    obj1.printData();
    // obj1.print();


    return 0;
} 