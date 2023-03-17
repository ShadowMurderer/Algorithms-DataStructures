#include <iostream>
#include "6.OOPAdvancedClass.cpp"
using namespace std;

int main()
{
    char name[] = "abcd";
    Student s1(20, name);
    s1.display();

    name[3] = 'e';
    Student s2(30, name);
    s2.display();

    s1.display();

    return 0;
}