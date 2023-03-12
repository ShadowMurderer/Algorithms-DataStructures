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

    Student(int s, int x) /// Creating custom parametrised constructor
    {
        cout << "Contstructor 2 called" << endl;
        age = s;
        group = x;
    }

    void display()
    {
        cout << age << " " << group << endl;
    }

    int getAge()
    {
        return age;
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
