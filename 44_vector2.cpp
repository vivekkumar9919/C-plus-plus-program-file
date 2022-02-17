#include<iostream>
using namespace std;
#include<vector>

int main(){

vector<int> vec1;
vec1.push_back(4);
vec1.push_back(10);
vec1.push_back(39);
vec1.push_back(100);

cout<<vec1[0]<<endl;
vec1[1]=11;
cout<<"size of array is : "<<vec1.size()<<endl;
cout<<vec1[1]<<endl;
cout<<"vector at position 1 is "<<vec1.at(1)<<endl; 

return 0;
}