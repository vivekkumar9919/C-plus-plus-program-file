#include <iostream>
using namespace std;

int add(int a ,int b){
    return a+b;
}
// void add(int a ,int b){
//     cout<<a<<b;
// }


int add(int a,int b,int c ){
    return a+b+15;
}
// void add(int a,int b,int c ){
//     cout<<"three argument function"<<endl;
//     cout<<a+b+c;
//     // return a+b+15;
// }

int add(int a ,int b ,int c ,int d){
    return a+b+c+d;
}
int add(string a,string b){
    string c;
    c=a+b;
    cout<<c<<endl;
    return 0;
}

int main(){
   
    cout<<"sum of 2 and 4 is : - "<<add(2,4)<<endl;
    // cout<<"sum of 2.3 and 4.5 is : - "<<add(2.3,4.5)<<endl;
    cout<<"sum of 2 ,4 and 5 is : - "<<add(2,4,5)<<endl;
    cout<<"string concatination is : -"<<add("hii","vk")<<endl;

    return 0;
}