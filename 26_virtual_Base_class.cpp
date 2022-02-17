// #include<iostream>
// using namespace  std;
// class Base1{
//     int a;
//     public:
//     void show(){
//         cout<<"Hello vivek kumar"<<endl;
//     }
// };
// class Derived1 : public Base1{
//     int b;
    
// };
// class Derived2 : public Base1{
//     int c;

// };

// class NewDerived : public Derived1,public Derived2{
//     int d;
// };

// int main(){
//     NewDerived obj1;
//     obj1.show();


//     return 0;
// }

// above code will show ambiguity Because show() function is shared by both the class from which new class is derived i.e. NewDerived 
// uncomment the above code to see the error
// solution of this type of ambiguity is given below


#include<iostream>
using namespace  std;
class Base1{
    int a;
    public:
    void show(){
        cout<<"Hello vivek kumar"<<endl;
    }
};
class Derived1 : public virtual Base1{
    int b;
    
};
class Derived2 : public virtual Base1{
    int c;

};

class NewDerived : public Derived1,public Derived2{
    int d;
};

int main(){
    NewDerived obj1;
    obj1.show();


    return 0;
}

