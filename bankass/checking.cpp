#include"checking.h"
#include<iostream>
using namespace std;
void checking::withdraw(int b)
{
    int rm=tellbalance()-b;
    if(rm<5000)
    {
        cout<<"you cannot withdraw this amount because by withdrawing this your balance will be less than 5000"<<endl;
    }
    else
   { account::withdraw( b);}
}
void checking::show()
{
    cout<<"Checking Account"<<endl;
    account::show();
    cout<<"No of Checks:"<<noof_checks<<endl;
}
void checking::get()
{
    account::get();
    cout<<"No of Checks:";
    cin>>noof_checks;
}