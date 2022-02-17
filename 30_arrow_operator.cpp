#include <iostream>
using namespace std;

class Complex
{
    int real, img;

public:
    void getdata()
    {
        cout << "Real part is " << real << endl;
        cout << "Imaginary part is " << img << endl;
    }
    void setdata(int a, int b)
    {
        real = a;
        img = b;
    }
};
int main()
{
    // Complex c1;
    // Complex *ptr = &c1;

    // or

    Complex *ptr = new Complex;

    // (*ptr).setdata(23, 45);
    // (*ptr).getdata();
    // or
    ptr->setdata(23, 45);
    ptr->getdata();



    // array of objects
    Complex *ptr1 = new Complex;
    ptr1->setdata(23, 45);
    ptr1->getdata();

    return 0;
}






// my testing on code

// #include <iostream>
// using namespace std;

// class Complex
// {
//     int real, img;

// public:
//     void getdata()
//     {
//         cout << "Real part is " << real << endl;
//         cout << "Imaginary part is " << img << endl;
//     }
//     void setdata(int a, int b)
//     {
//         real = a;
//         img = b;
//     }
//     int addition(){
//         return real+img;
//     }
// };
// int main()
// {
//     // Complex c1;
//     // Complex *ptr = &c1;

//     // or

//     Complex *ptr = new Complex;

//     // (*ptr).setdata(23, 45);
//     // (*ptr).getdata();
//     // or
//     ptr->setdata(23, 45);
//     ptr->getdata();



//     // array of objects
//     Complex *ptr1 = new Complex;
//     ptr1->setdata(23, 45);
//     ptr1->getdata();


//     int ptrres=(ptr1+1)->addition();
//     // cout<<(ptr1+1)->addition()<<endl;
//     cout<<ptrres<<endl;

//     return 0;
// }