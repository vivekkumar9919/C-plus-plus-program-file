#include<iostream>
using namespace std;

class Number{
    int a;
    public :
    // There must be deafault constructor;
      Number(); //deafault
      Number(int num){
          a=num;
      }
      Number(Number &obj){
          cout<<"Copy Constructor called"<<endl;
          a=obj.a;
      }
      void dipslay(){
          cout<<"Number of object is " <<a<<endl;
      }
};

int main(){

    Number n1(23),n3(10);
    n1.dipslay();
    // n2.dipslay();
    n3.dipslay();
     
    Number z1(n1);
    z1.dipslay();

    Number z2=n3;  // here copy constructor is called


    return 0;
}


// When  no copy constructor is found , a compiler supplies its own copy constructor