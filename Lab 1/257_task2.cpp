#include <iostream>

using namespace std;

enum etype { laborer, secretary, manager, accountant, executive,researcher };

int main()
{
    etype a;
    char ch;
    cout << "Enter employee type:";
    cin>>ch;
    switch(ch)
    {
    case 'l':
        {
          a = laborer;
          break;
        }
    case 's':
        {
            a = secretary;
            break;
        }
    case 'm':
        {
          a = manager;
          break;
        }
    case 'a':
        {
            a = accountant;
            break;
        }
    case 'e':
        {
          a = executive;
          break;
        }
    case 'r':
        {
            a = researcher;
            break;
        }
    }

       switch(a)
    {
    case laborer:
        {
          cout << "laborer";
          break;
        }
    case secretary:
        {
            cout << "secretary";
            break;
        }
    case manager:
        {
          cout<< "manager";
          break;
        }
    case accountant:
        {
            cout << "accountant";
            break;
        }
    case executive:
        {
          cout << "executive";
          break;
        }
    case researcher:
        {
            cout << "researcher";
            break;
        }
    }


    return 0;
}

