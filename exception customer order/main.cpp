#include<iostream>
#include"order.h"
#include"error.h"
using namespace std;
int main()
{
  
int f=0;
  customer_order c[5];
    cout<<"Enter order of s Poducts"<<endl;
    try
    {
    
    for (int i = 0; i <5; i++)
    {
      c[i].get();
    }
    }
    catch(error e)
    {
      e.exception();

    }

    for(int i = 0; i <5; i++)
    {
      c[i].show();
    }
    for(int i = 0; i <5; i++)
    {
      c[i].save();
    }
    cout<<char(3);

    return 0;
}