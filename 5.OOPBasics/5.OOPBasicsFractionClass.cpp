#include <iostream>

using namespace std;

class Fraction
{
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void print()
    {
        cout << this->numerator << "/" << this->denominator << endl;
    }

    void add(Fraction const &f2)
    {
        int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;
        int num = x * this->numerator + y * f2.numerator;

        /// Store result in f1
        this->numerator = num;
        this->denominator = lcm;

        simplify();
    }

    void multiply(Fraction const &f2) {
        int mulNum = this->numerator * f2.numerator;
        int mulDel = this->denominator * f2.denominator;

        this->numerator = mulNum;
        this->denominator = mulDel;

        simplify();
    }

    void simplify()
    {
        int gcd = 1;
        int j = min(this->numerator, this->denominator);
        for (int i = 1; i <= j; i++)
        {
            if (numerator % i == 0 && denominator % i == 0)
            {
                gcd = i;
            }
        }

        /// Inbuilt function for gcd
        /// __gcd(a, b);

        numerator = numerator / gcd;
        denominator = denominator / gcd;
    }
};