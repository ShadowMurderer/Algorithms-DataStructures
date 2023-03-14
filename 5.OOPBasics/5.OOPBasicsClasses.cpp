#include <iostream>
using namespace std;

class Student
{

    int age;

public:
    int group;

    Student() /// Creating custom defauls constructor
    {
        cout << "Constructor called" << endl;
    }

    Student(int s, int group) /// Creating custom parametrised constructor
    {
        cout << "this " << this << endl;
        cout << "Contstructor 2 called" << endl;
        age = s;
        this->group = group;
    }

    void display()
    {
        cout << age << " " << group << endl;
    }

    int getAge()
    {
        return age;
    }

    int getGroup()
    {
        return group;
    }

    void setGroup(int group)
    {
        if (group < 0)
        {
            this->group = group;
        }
    }

    void setAge(int a, int password)
    {
        if (password != 123)
        {
            if (a < 0)
            {
                return;
            }
            age = a;
        }
    }
};
