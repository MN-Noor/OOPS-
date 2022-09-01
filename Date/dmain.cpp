#include"date.h"
#include<iostream>
using namespace std;
int main()
{ int ch;
    date d;
    date();
    date d1(28,12,2987);
    date dd1(23,12,2134);
    date dd2(23,3,1234);
    date dd3();
    d.menu();
    cin>>ch;
  
  if (ch==1)
  {
    d1.nextday();
      d1.display();
 }
 else if(ch==2)
  {
      d1.preday();
      d1.display(); 
  }
  else if(ch==3)
 { 
     d.get();
d.nextday();
d.display();
 }
 else if(ch==4)
  {
 d.get();
d.preday();
d.display();
 }
  else if(ch==5)
  {
    dd1.get();
     cout<<"Enter second date"<<endl;
     dd2.get();
    d.greaterdate( dd1,dd2);
 }

  else if(ch==6)
  {
    dd1.get();
cout<<"Enter second date"<<endl;
dd2.get();
d.noofdays(dd1,dd2);
  }
   return 0;
}