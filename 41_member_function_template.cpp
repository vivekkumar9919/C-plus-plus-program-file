#include<iostream>
using namespace std;
template <class T>
class sample{
    public:
    T data;
    sample(T a){
        data = a;
    }
    void display();
};
 
template <class T>
void sample<T>:: display(){
    cout<<data<<endl;
}


int main(){
  sample <int> obj(5);
  obj.display();
return 0;
}