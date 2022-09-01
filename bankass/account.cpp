#include"account .h"
#include<fstream>
#include<iostream>
#include<string>
account::account()
{
    accno=456;
    holder_name="uijhkj";
    balance=456;
}
account::account(int an,string hn,int b)
{
accno=an;
holder_name=hn;
balance=b;
}
void account::withdraw(int b)
{
     balance-=b;
}
void::account::show()
{
cout<<"Account number:"<<accno<<endl;
cout<<"Account holder:"<<holder_name<<endl;
cout<<"Balance:"<<balance<<endl;
}
void account:: get()
{
    cout<<"Enter your information"<<endl;
    cout<<"Account number:";
    cin>>accno;
cout<<"Account holder:";
cin>>holder_name;
cout<<"Balance:";
cin>>balance;
    
}
