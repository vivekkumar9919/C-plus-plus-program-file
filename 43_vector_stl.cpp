#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1;
    int n;
    cout << "Enter the size of vector :- ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;
        vec1.push_back(inp);
    }

    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }
    cout<<endl;

    //! Output of begin and end
    cout << "Output of begin and end :- ";
    for (auto i = vec1.begin(); i != vec1.end(); ++i)
    {
        cout << *i << " ";
        auto ab=vec1.begin();
        
    }

   cout<<endl;
    //! Output of cbegin and cend 
    cout << "Output of cbegin and cend :- ";
    for (auto i = vec1.cbegin(); i != vec1.cend(); ++i)
    {
        cout << *i << " ";
        auto ab=vec1.begin();
        
    }

     cout<<endl;
    //! Output of rbegin and rend 
    cout << "Output of rbegin and rend :- ";
    for (auto i = vec1.rbegin(); i != vec1.rend(); ++i)
    {
        cout << *i << " ";
        auto ab=vec1.begin();   
    }

    return 0;
}