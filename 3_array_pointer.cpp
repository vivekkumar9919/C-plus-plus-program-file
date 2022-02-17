#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,14,13,16,17};
    int *b=arr;
    cout<<"The value of arr[0] is :-"<<*b<<endl;
    cout<<"The value of arr[1] is :-"<<*(b+1)<<endl;
    cout<<"The value of arr[2] is :-"<<*(b+2)<<endl;
    cout<<"The value of arr[3] is :-"<<*(b+3)<<endl;
    cout<<"The value of arr[4] is :-"<<*(b+4)<<endl;

    cout<<"the value of *(b++):-"<<*(b++)<<endl;
    cout<<"the value of *(b):-"<<*(b)<<endl;
    return 0;
}