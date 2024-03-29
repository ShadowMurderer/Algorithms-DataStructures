#include <iostream>
#include "5.OOPBasicsClasses.cpp"

using namespace std;

int main()
{

    Student s1(50, 5); /// Creating objects statically
    cout << "Adress of s1 " << &s1 << endl;
    Student s2(s1); /// Copy inbuilt
    cout << "Adress of s2 " << &s2 << endl;

    Student *s3 = new Student(20, 200);
    cout << "S3 is: " << endl;
    s3->display();

    Student s4(*s3); /// Copy constructor
    Student *s5 = new Student(*s3);
    Student *s6 = new Student(s1);

    *s3 = s1; /// Copy assignment operator

    s4.display();
    s5->display();
    s6->display();

    s1.display();
    s2.display();

    delete s3;
    delete s5;
    delete s6;

    // Student *s5 = new Student(21, 4); /// Creating objects dynamically
    // (*s5).display();

    // Student s4(20, 5);
    // s4.display();

    // s1.group = 1;
    // s1.setAge(20);  /// Declaring age value using external funciton
    // s5->setAge(30); /// Pointer only works for dynamic variables

    // s1.display(); /// Using function display to print all the values inside class
    // (*s5).display();

    // cout << "S1 age: " << s1.getAge() << endl; /// Printing age using function
    // cout << "S2 age: " << s2.getAge() << endl;

    // (*s5).group = 2; /// Declaring value method 1
    // (*s5).display();

    // s5->group = 2; /// Declaring value method 2
    // s5->display();

    // cout << "S5: " << (*s5).getAge() << endl;

    return 0;
}