#include <iostream>
using namespace std;

class Student
{
public:
    int group;

private:
    int age;

public:
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
