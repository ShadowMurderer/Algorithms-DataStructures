#include <iostream>
#include "5.OOPBasicsFractionClass.cpp"

using namespace std;

int main()
{
    Fraction f1(10, 5);
    Fraction f2(5, 7);

    cout << "Fraction's sum: " << endl;
    f1.add(f2);
    f1.print();
    f2.print();

    cout << "Fraction multiplication: " << endl;
    f1.multiply(f2);
    f1.print();
    f2.print();

    return 0;
}