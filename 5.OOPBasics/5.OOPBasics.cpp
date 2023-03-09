#include <iostream>
#include "5.OOPBasicsClasses.cpp"

using namespace std;

int main()
{
    Student s1; /// Creating objects statically
    Student s2, s3, s4;

    Student *s5 = new Student; /// Creating objects dynamically

    s1.age = 24; /// Defining static objects
    s1.group = 1;

    cout << s1.age << " " << s1.group << endl;

    (*s5).age = 55; /// Defining dynamic objects
    s5->group = 2;

    cout << (*s5).age << " " << s5->group << endl;

    return 0;
}