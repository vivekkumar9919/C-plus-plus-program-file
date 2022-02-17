#include <iostream>
using namespace std;

// base class
class Employee
{
public:
    int id;
    float salary;
    Employee(){};
    Employee(int a)
    {
        id = a;
        salary = 1000;
    }
};

// derived class
// define visibilty mode is private
// private: Public member of base class becomes the private member of derived class
// public : Public member of base class becomes the public member of derived class
// private member of base class can not be inheritance
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}

class Progrmmer : Employee{
    public:
    Progrmmer(int b){
        id=b;
    }
    int lang = 9;


};

int main()
{   
    Employee vk(1),sk(2);
    cout<<vk.salary<<endl;
    cout<<sk.salary<<endl;
    Progrmmer skill(3);
    cout<<skill.lang<<endl;

    return 0;
}