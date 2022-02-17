// #include <iostream>
// #include <fstream>
// using namespace std;

// // the usefull classes for working with c++ files
// // 1. fstreambase
// // 2. ifstream
// // 3. ofstream

// int main()
// {

//     string st = "hello vivek kumar";
//     ofstream outvk("36_samplefile.txt");
//     outvk<<st;

//     // string st2;
//     // ifstream ina("36_ samplefile.txt");

//     // ina >> st2;  
//     // getline(ina, st2);

//     // cout << st2;
//     return 0;
// }




#include<iostream>
#include<fstream>
using namespace std;
int main(){

    // read operation
//  ofstream hout("36_samplefile.txt");
//  cout<<"enter your name"<<endl;
//  string name;
//  cin>>name;

//  hout<<" my name is "<<name;
//  hout.close(); 


// write operation
 ifstream hin("36_samplefile.txt");
 string content;
 hin>>content;
 cout<<"The content of file is "<<content<<endl;
return 0;
}