#include <iostream>
using namespace std;

class RationalNumber
{
private:
    int numerator , denominator;
    float res;
public:
    void Assign (int a , int b);
    float Convert(int numerator , int denominator);
    void Invert (int denominator , int numerator);
    void print(void);
};

void RationalNumber::Assign(int a, int b)
{
    numerator = a;
    denominator = b;
}

float RationalNumber::Convert(int numerator, int denominator)
{
    if (denominator != 0){
        //res = numerator / denominator;
        return  (numerator / (float)denominator);
    }
    else{
        cout <<"impossible"<<endl;
        return -1.00;
    }
}

void RationalNumber::Invert(int denominator, int numerator)
{
    if (numerator != 0){
        cout << numerator <<"/"<<denominator<<endl;
    }
    else{
        cout <<"You can not assign 0 as denominator. Inversion Failed."<<endl;
    }
}

void RationalNumber::print(void)
{
    if (denominator != 0){
        cout << numerator <<"/"<<denominator<<endl;
    }
    else{
        cout <<"You can not assign 0 as denominator. Inversion Failed."<<endl;
    }
}

int main(void)
{
    int num , denom;
    cout << "assign two numbers numerator and denominator: ";
    cin >> num >> denom;
    RationalNumber r;


    if(denom!=0){
        r.Assign(num , denom);
    }
    else{
        cout <<"You can not assign 0 as denominator."<<endl;
        return 1;
    }

    cout <<"--------------------------------------"<<endl;
    cout << "convert value is: ";
    cout << r.Convert(num , denom) << endl;

    cout <<"--------------------------------------"<<endl;
    cout << "invert value is: ";
    r.Invert(num , denom);

    cout <<"--------------------------------------"<<endl;
    cout << "our rational number is: ";
    r.print();

    return 0;
}
