#include <iostream>
#include <cstring>

using namespace std;

class Student
{
    int age;
    char *name;

public:
    Student(int age, char *name)
    {
        this->age = age;
        /// this->name = name;  Shallow copy
        this->name = new char[strlen(name) + 1]; /// Deep copy
        strcpy(this->name, name);
    }

    void display()
    {
        cout << name << " " << age << endl;
    }
};