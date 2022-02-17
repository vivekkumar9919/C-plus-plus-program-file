#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> marksmap;
    marksmap["harry"] = 98;
    marksmap["jack"] = 34;
    marksmap["rohan"] = 340;
    marksmap["vivek"] = 90;

   marksmap.insert({{"rakesh",33},{"shivam",198}}); 
    map<string,int>::iterator iter;
    for (iter = marksmap.begin(); iter!=marksmap.end(); iter++)
    {
        /* code */
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    vfc 

    return 0;
}