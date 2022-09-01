#include"saving.h"
#include<iostream>
#include<string>
using namespace std;
void saving::withdraw(int b)
{
    if(b>50000)
    {
        cout<<"you cannot withdraw amount more than 50000 from saving account"<<endl;
    }
    else{

       account::withdraw(b);
       cout<<"you have successfully withdrawn this money"<<endl;
    }
}
void saving::show()
{
    cout<<"Saving Account"<<endl;
    account::show();
    cout<<"Interest Rate:"<<intrest_rate<<endl;
}
void saving::get()
{
    account::show();
    cout<<"Intrest rate:";
    cin>>intrest_rate;
}
