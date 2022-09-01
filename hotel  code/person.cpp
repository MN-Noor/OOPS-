
#include<string>
#include<iostream>
#include"person.h"
using namespace std;
void person::getinfo()
{
cout<<"enter name";
cin>>name;
cout<<"ID card number";
cin>>id;
cout<<"Phone no";
cin>>phoneno;
}
void person::show()
{
    cout<<"Name:"<<name<<"\nID card no:"<<id<<"\nPhone no:"<<phoneno<<endl;
}
int person::tellid()
{
    return id;
}