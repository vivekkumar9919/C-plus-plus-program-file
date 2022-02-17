#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;
    public:
      void read();
      void check_binary();

};
void binary :: read(){
    cout<<"Enter a Binary number "<<endl;
    cin>>s;
}

void binary :: check_binary(){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Given number is not a Binary number"<<endl;
            exit(0);
        }
    }
    
}

int main(){
    binary b1;
    b1.read();
    b1.check_binary();


    return 0;
}