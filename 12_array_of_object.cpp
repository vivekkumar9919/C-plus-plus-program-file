#include <iostream>
using namespace std;

class students
{
    int id;
    int fees;

public:
    void setId()
    {
        fees = 12345;
        cout << "Enter the Id of students : -" << endl;
        cin >> id;
    }
    void getId()
    {
        cout << "The id of students is :- " << id << endl;
    }
};

int main()
{
    // students vivek;
    // vivek.setId();
    // vivek.getId();

    // objecs as array is given below
    students aps[4];
    for (int i = 0; i < 4; i++)
    {
        aps[i].setId();
    }
    for (int i = 0; i < 4; i++)
    {

        aps[i].getId();
    }

    return 0;
}