#include <iostream>
using namespace std;

int main()

{
    int second_numerator , second_denominator , first_numerator , first_denominator;
    char ch;

    cout << "enter first fraction:"<<endl;
    cin >> first_numerator >>ch>> first_denominator;


    cout << "enter second fraction:"<<endl;
    cin >> second_numerator >>ch>> second_denominator;

    cout <<"sum:"<< (first_numerator*second_denominator + first_denominator*second_numerator) <<'/'<< (second_denominator*first_denominator)<<endl;


}
