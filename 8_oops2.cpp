// #include<iostream>
// using namespace std;

// class Area{
//    public:
//       int a,b;
//       int area_of_square(int a){
//           return a*a;
//       }
//       int area_of_rectangle(int a,int b){
//           return a*b;
//       }
//       int area_5(int a){
//           return a*a*5;
//       }


// };
 
//  int main(){
//      Area find,find2;
//      cout<<"area of square "<< find.area_of_square(5)<<endl;
//      cout<<"area of rectangle "<<find.area_of_rectangle(1,8)<<endl;
//      cout<<"area of square *5 "<<find2.area_5(2)<<endl;


//      return 0;
//  }












#include<iostream>
using namespace std;

class Area{
   public:
    //   int a,b;
      int area_of_square(int a);
      int area_of_rectangle(int a,int b);
      int area_5(int a){
          return a*a*5;
      }
      
};

int Area :: area_of_square(int a){
    return a*a;
}

int Area ::area_of_rectangle(int a,int b){
    return a*b;
}


 
 int main(){
    //  create object for class
     Area find,find2;
     cout<<"area of square "<< find.area_of_square(5)<<endl;
     cout<<"area of rectangle "<<find.area_of_rectangle(1,8)<<endl;
     cout<<"area of square *5 "<<find2.area_5(2)<<endl;
   


     return 0;
 }