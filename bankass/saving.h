#pragma once
#include"account .h"
#include<iostream>
#include<string>
using namespace std;
class saving:public account
{
    float intrest_rate;
    public:
    saving()
    {
        intrest_rate=0;
    }
    saving(int an,string hn,int b,float ir):account(an,hn,b)
    {
        intrest_rate=ir;
    }
void withdraw(int b);
void show();
void get();
string save()
{
     string line1;
       string line2=account::save();
       line1="f:"+line2+":"+to_string(intrest_rate);
       return line1;
}
};