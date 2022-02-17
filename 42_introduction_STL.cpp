
/**
 * TODO: Theroy of STL (Standard Template Libary)
*! components of STL
*? 1. Container (object that store data)
   *? 1.1 Sequence Container
   *? 1.2 Assocative Container
   *? 1.3 Derived Container
*? 2. Algorithms
*? 3. Iterators
*/


#include<iostream>
#include<vector>
using namespace std;

void display(vector <int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
  vector<int> vec1;  //! Zero length vector declaration
  vector<char> vec2(4);  //! 4 length vector declaration
  vector<char> vec3(vec2);  //! 4 length vector declaration from vec2
  int n;
  cout<<"Enter the number of element of vector :- ";
  cin>>n;
  int ele;
  for (int i = 0; i < n; i++)
  {
      cout<<"enter the number to add to the vector :- ";
      cin>>ele;
      vec1.push_back(ele);

  }
  display(vec1);
 //Todo delete the top element
//   vec1.pop_back(); 

// Todo insert the element
  vector <int> :: iterator iter=vec1.begin();
//   vec1.insert(iter,566);    //position 0
//   vec1.insert(iter+1,500);   //position 1
  vec1.insert(iter+3,10,700);   // insert element 10 times at 3 position


  display(vec1);
  
return 0;
}