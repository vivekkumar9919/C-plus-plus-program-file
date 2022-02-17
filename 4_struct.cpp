#include<iostream>
using namespace std;
// stucture is user defined datatype in c++
struct employee
{
    /* data */
    int id;
    char favchar;
    float salary;
    string add;
};

int main(){
    struct employee vk;
    struct employee sj;
        
        vk.id=133;
        vk.favchar = 'c';
        vk.salary = 120; 
        vk.add="ramgaon";
        cout<<vk.salary<<endl;
        cout<<vk.favchar<<endl;
        cout<<vk.id<<endl;
        cout<<vk.add<<endl;


        sj.favchar='p';
        sj.id=111;
        sj.salary=12345;
        sj.add="pratapgarh";
        cout<<sj.favchar<<endl;
        cout<<sj.id<<endl;
        cout<<sj.salary<<endl;
        cout<<sj.add<<endl;
        return 0;
    
    

}