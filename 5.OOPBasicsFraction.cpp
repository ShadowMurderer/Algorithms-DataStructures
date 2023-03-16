#include <iostream>
#include "5.OOPBasicsFractionClass.cpp"

using namespace std;

int main()
{
    Fraction f1(10, 5);
    Fraction f2(5, 7);

    f1.add(f2);
    f1.print();

    return 0;
}