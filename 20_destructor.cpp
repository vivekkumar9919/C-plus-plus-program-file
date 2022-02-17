#include<iostream>
using namespace std;

int count=0;
class Num{
    public:
    Num(){
        count++;
        cout<<"Constructor is callled for object number "<<count<<endl;
    }
    ~Num(){
        cout<<"Destructor is called for object number "<<count<<endl;
        count--;
    }

};

int main(){
    cout<<"Inside the main object "<<endl;
    cout<<"Creating first object n1 "<<endl;
    Num n1;
    {
        cout<<"Entering in the block "<<endl;
        cout<<"Creating two more object"<<endl;
        Num n2,n3;
        cout<<"Exiting block"<<endl;
    }
    cout<<"Back to main "<<endl;
    return 0;
}