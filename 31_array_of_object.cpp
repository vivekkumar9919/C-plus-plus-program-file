#include<iostream>
using namespace std;
class Shop{
    int id;
    float price;
    public:
    void setdata(int a ,float b){
        id=a;
        price =b;
    }
    void getdata(){
        cout<<"The Price of Item-"<<id<< " is "<<price<<endl;
    }
};
int main(){
    int size =2;
    int p ;
    float q;
    Shop *ptr= new Shop[size];
    Shop *ptrtemp= ptr;

    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<"Enter The Id and price of "<<i+1 <<" object"<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for (int j = 0; j < size; j++)
    {
       cout<<"Object "<<j+1 << " is "<<endl;
       ptrtemp->getdata();
       ptrtemp++;

    }
    
    
     
  
return 0;
}