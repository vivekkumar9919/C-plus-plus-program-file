#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    void setcomplex(int n1 ,int n2){
       a=n1;
       b=n2;
    }
    void printComplex(){
        cout<<"Complex Number is :- " <<a <<" + "<<b<<"i"<<endl;
    }
     void sumOfComplex(){
        cout<<"Sum of Complex Number is :- " <<a <<" + "<<b<<"i"<<endl;
    }

    
    // friends function
    // It allow to foreign function to use the private data of class
    friend Complex sumcomlex(Complex o1 , Complex o2);

};

Complex sumcomlex(Complex o1 ,Complex o2){
    Complex o3;
    o3.setcomplex((o1.a + o2.a),(o1.b+o2.b));
    return o3;
}

int main(){
    Complex c1,c2, sum;
    c1.setcomplex(2,9);
    // c1.setcomplex(2+3,9+6);
    c2.setcomplex(3,6);
    

    c1.printComplex();
    c2.printComplex();

    sum=sumcomlex(c1,c2);
    sum.sumOfComplex();

    return 0;
}



// Properties of friends function
// 1. Not in the scope of class 
// 2. Since it is not in the scope of the class , so we can called  like c1.sumcopmlex
// 3. Usally contian object as arguments
// 5. Can be declare inside the public or private part of the class
// 