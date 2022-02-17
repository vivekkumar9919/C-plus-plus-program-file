#include<iostream>
using namespace std;
int main(){
    int a=3;
    int *b=&a;

    // address of variable
    cout<<b<<endl;
    // address of variable
    cout<<&a<<endl;
    // value of stored address
    cout<<*b<<endl;


// pointer to pointer
    int **c=&b;
    cout<<c<<endl;
    cout<<**c<<endl;
    cout<<&b;

    return 0;
}