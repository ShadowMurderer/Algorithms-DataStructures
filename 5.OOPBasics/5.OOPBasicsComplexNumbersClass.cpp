#include <iostream>
using namespace std;

class complexNumber
{
    int realNumber;
    int imaginaryNumber;

public:
    complexNumber(int realNumber, int imaginaryNumber)
    {
        cout << "Contructor called" << endl;
        this->realNumber = realNumber;
        this->imaginaryNumber = imaginaryNumber;
    }

    void print() {
        cout << this->realNumber << " + " << this->imaginaryNumber << "i" << endl; 
    }

    void add(complexNumber const &c2)
    {
        this->realNumber = this->realNumber + c2.realNumber;
        this->imaginaryNumber = this->imaginaryNumber + c2.imaginaryNumber;
    }

    void multi(complexNumber const &c2)
    {
        this->realNumber = this->realNumber * c2.realNumber - this->imaginaryNumber * c2.imaginaryNumber;
        this->imaginaryNumber = this->realNumber * c2.imaginaryNumber + this->imaginaryNumber * c2.realNumber;
    }
};