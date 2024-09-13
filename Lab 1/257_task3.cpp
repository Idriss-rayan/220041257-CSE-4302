#include <iostream>
using namespace std;

struct fract
{
    int numerator;
    int denominator;
    char ch;
};

int main()
{
    fract fract_1 , fract_2;

    cout << "enter first fraction:";
    cin >> fract_1.numerator >> fract_1.ch >> fract_1.denominator;

    cout << "enter second fraction:";
    cin >> fract_2.numerator >> fract_2.ch >> fract_2.denominator;

    cout << (fract_1.numerator*fract_2.denominator + fract_1.denominator*fract_2.numerator) <<"/"<< (fract_1.denominator*fract_2.denominator);

    return 0;
}
