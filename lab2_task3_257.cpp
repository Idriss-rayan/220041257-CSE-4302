#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string name_custumer , account_number ,  type_account;
    int balance_custumer = 0;
public:
    void customerDetails();
    void accountType();
    void balance();
    void deposit();
    void withdraw();
    void display();
};

void BankAccount::customerDetails()
{
    cout << "name of custumer: ";
    getline(cin , name_custumer);

    cout << "Account number: ";
    cin >> account_number;
}

void BankAccount::accountType()
{
    cout << "type of account (saving/drawing) ";
    cin >> type_account;
}

void BankAccount::balance()
{
    cout<<"the balance of custumer is: "<< balance_custumer<<endl;
}

void BankAccount::deposit()
{
    int a;
    cout << "depose an amount: ";
    cin >> a;
    balance_custumer += a;

    cout << "final amount is: "<<balance_custumer<<endl;
}

void BankAccount::withdraw()
{
    int w;
    cout << "amount you want to widraw: ";
    cin >> w;

    balance_custumer -= w;
    cout <<"current balance is: "<<balance_custumer<<endl;
}

void BankAccount::display()
{
    cout <<"name of custumer: "<<name_custumer<<endl;
    cout <<"account number: "<<account_number<<endl;
    cout <<"type of account: "<<type_account<<endl;
    cout <<"Current balance in the account: "<<balance_custumer<<endl;
}

int main()
{
    BankAccount b;

    b.customerDetails();
    b.accountType();
    b.balance();
    b.deposit();
    b.withdraw();
    cout <<"----------------infos---------------"<<endl;
    b.display();

    return 0;
}
