#include <iostream>
using namespace std;

class Students
{
protected:
    int roll_number;

public:
    void set_roll_no(int);
    void get_roll_no(void);
};

void Students::set_roll_no(int r)
{
    roll_number = r;
}
void Students ::get_roll_no()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Students
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::get_marks()
{
    // cout<<"Marks Obtain by Roll Number "<<roll_number<<" is : -"<<endl;
    cout << "Maths Marks is : - " << maths << endl;
    cout << "Physic Marks is : - " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_no();
        // set_marks();
        get_marks();
        cout << "Your Percentage is  " << (maths + physics) / 2 << " %" << endl;
    }
};

int main()
{
    Result vk;
    vk.set_roll_no(133);

    vk.set_marks(96, 95);
    vk.display();

    return 0;
}