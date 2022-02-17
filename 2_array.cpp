
// method 1
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     cout<<arr[4]<<endl;
//     cout<<arr[7]<<endl;
//     cout<<arr[8]<<endl;
//     return 0;
// }



// method 1
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10,12};
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     cout<<arr[4]<<endl;
//     cout<<arr[7]<<endl;
//     cout<<arr[8]<<endl;
//     return 0;
// }


// method 1
#include<iostream>
using namespace std;
int main(){
     int n;
     int arr[30];
    cout<<"Enter the number of element in array:-\n";
    cin>>n;
    cout<<"Enter the array:-\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Your array is :-";
       for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\n";
    }
    
    return 0;
}