#include<iostream>
using namespace std;

template <class T1=int , class T2=float>
class Temp{
    public:
    T1 a;
    T2 b;
    Temp(T1 x , T2 y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"The value of a is " <<a<<endl;
        cout<<"The value of a is " <<b<<endl;
    }
};
int main(){
    cout<<"deafault case"<<endl;
    Temp <>obj(4,6.4);
    obj.display();
    
    cout<<"int int case"<<endl;
    Temp <int ,int>obj2(4,6.4);
    obj2.display();

cout<<"float int case"<<endl;
    Temp <float ,int>obj3(4.90,6.4);
    obj3.display();
    

  
return 0;
}