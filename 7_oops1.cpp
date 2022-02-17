#include<iostream>
using namespace std;

class Employee{
    private :
        int a,b,c;


    public:
        int d,e;
        void setData(int a1, int b1 ,int c1);
        void getData(){
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    Employee vk;
    vk.d=78;
    vk.e=90;
    // we can access a,b,c like a above methods because a,b,c is private member 
    // a,b,c can be access through a class function
    vk.setData(1,5,8);
    // vk.a=20; show a error msg
    vk.getData();


    return 0;
}