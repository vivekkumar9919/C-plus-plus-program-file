#include <iostream>
using namespace std;
int main()
{

    // new is used for dynamic memory allocation
    int *a = new int(4);
    // cout << "the value of a is :-" << *(a) << endl;

    float *b =new float(3.5);
    // cout << "the value of b is :-" << *(b) << endl;

// array of size 4
    // int *arr= new int[4];
    // arr[0]=100;
    // arr[1]=10;
    // arr[2]=20;
    // arr[3]=30;
    // cout << "the value of a[0] is :-" << arr[0] << endl;
    // cout << "the value of a[1] is :-" << arr[1] << endl;
    // cout << "the value of a[2] is :-" << arr[2] << endl;
    // cout << "the value of a[3] is :-" << arr[3] << endl;


    // delete keyword
    int *arr= new int[4];
    arr[0]=100;
    // arr[1]=10;
    *(arr+1)=10;  //it also work
    arr[2]=20;
    arr[3]=30;
    // delete arr;
    // delete[] arr;
    cout << "the value of a[0] is :-" << arr[0] << endl;
    cout << "the value of a[1] is :-" << arr[1] << endl;
    cout << "the value of a[2] is :-" << arr[2] << endl;
    cout << "the value of a[3] is :-" << arr[3] << endl;

    return 0;
}