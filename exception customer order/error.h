#pragma once
#include<iostream>
#include<string>
using namespace std;
class error
{
    int m;
    public:
    error(int i)
    {
     m=i;
    }
   void exception()
    {
        if(m==1)
        {
            cout<<"entered order number is numeric but more than four digits"<<endl;
        }
        else if(m==2)
        {
            cout<<"the entered order quantity is over 50 "<<endl;
        }
        else if(m==3)
        {
            cout<<"the entered price each is more than $39.95."<<endl;
        }
        else if(m==4)
        {
            cout<<"the total (quantity times price) is more than $1000"<<endl;
        }
    }

};