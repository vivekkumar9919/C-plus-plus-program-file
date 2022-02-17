#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    void SetNumber(int n1 ,int n2){
        a=n1;
        b=n2;
    }
    void printNumber(){
        cout<<"Number is :- "<<a<<" "<<b<<endl;
    }
    // Creating a constructor
    // Constructor is special member function with same name as class name
    // it is used to initialize the object of class
    // It is called automatically when object is created

    // constructor declaration
    // should be declare in public section
    // define may be anywhere in class or outside the class
    Complex(void);
      
};

Complex:: Complex(void){
    a=10;
    b=90;
}

int main(){
    Complex c1;
    // c1.SetNumber(100,190);
    // c1.SetNumber(100);
    c1.printNumber();

    return 0;
}