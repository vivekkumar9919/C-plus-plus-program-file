#include<iostream>
#include<list>
using namespace std;


int main(){
   list<int> list1;
   list<int> list2(2);

   list1.push_back(7); 
   list1.push_back(74); 
   list1.push_back(75); 
   list1.push_back(97); 
 //  list1.push_back(70); 
 // list1.pop_back();
 // list1.pop_front();
//    list1.remove(75);
//    list1.merge(list1);
//    list1.sort();
   list1.reverse();


   list<int> ::iterator iter1;
   iter1=list1.begin();
   cout<<*iter1<<" ";
   iter1++;
   cout<<*iter1<<" ";
   iter1++;
   cout<<*iter1<<" ";
   iter1++;
   cout<<*iter1<<" ";

return 0;
}