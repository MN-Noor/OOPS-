#pragma once
#include<iostream>
#include<string>
using namespace std;
class account
{
int accno;
string holder_name;
int balance;
public:
account();
account(int an,string hn,int b);

virtual void withdraw(int b)=0;

int tellbalance()
{
    return balance;
}
int tellaccno()
{
    return accno;
}
void show();
void deposit(int amt)
{
balance+=amt;
}
void get();

virtual string save()
{
      string line;
       line=to_string(accno)+":"+holder_name+":"+to_string(balance);
      return line;
}

} ;