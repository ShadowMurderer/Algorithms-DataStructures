#include <iostream>
#include "5.OOPBasicsComplexNumbersClass.cpp"

using namespace std;

int main()
{
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    complexNumber c1(real1, imaginary1); /// Complex numbers initialization
    complexNumber c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1)
    {
        c1.add(c2);
        cout << "Complex numbers added" << endl;
        c1.print();
        c2.print();
    }

    else if (choice == 2)
    {
        c1.multi(c2);
        cout << "Complex numbers multiplied" << endl;
        c1.print();
        c2.print();
    }

    else
    {
        return 0;
    }
}