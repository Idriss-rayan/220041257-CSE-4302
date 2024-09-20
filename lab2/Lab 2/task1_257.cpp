#include<iostream>

using namespace std;

class Temperature
{
    private:
        int value;
    public:
        void SetIncrementStep(int a);
        int GetTemperature(int value);
        int Increment(int value);

};

void Temperature::SetIncrementStep(int a)
{
    value = a;

}

int Temperature::GetTemperature(int value)
{
    return value;
}

int Temperature::Increment(int value)
{
    return ++value;
}

int main()
{
    int temp_value = 10;
    //cin >> temp_value;

    Temperature T;

    cout << "value set is :" << T.GetTemperature(temp_value) <<endl;

    cout << "--------------------------"<<endl;

    cout << "Temperature increment is: "<<T.Increment(temp_value) <<endl;

    return 0;
}

