#include"date.h"
#include<iostream>
using namespace std;
date::date ()
{
    dd=12;
 mm=2;
yy=1997;
}
date::date(int d,int m,int y)
{   dd=d;
    mm=m;
   yy=y;
   while (isvalid()==false)
 {  if(isvalid()==false)
 
    {
        cout<<"Invalid Entery \nEnter values again"<<endl;
        get();
    }
 } 
}
void date:: get()
{ do
    {
     cout<<"Enter\nday:";
    cin>>dd;
    cout<<"month:";
    cin>>mm;
    cout<<"year:";
    cin>>yy;
if(isvalid()==false)
    {
        cout<<"Invalid Entery \nEnter values again"<<endl;
    }

    } while (isvalid()==false);
}
int date::maxdays(int mm)
{
    if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
    {
		return 31;
	}
    else if (mm == 4 || mm  == 6 || mm == 9 || mm == 11)
     {
		return 30;
	}
    else if(mm==2)
    {
        if(yy%4==2)
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
}
bool date::isvalid()
{
    if((yy>0)&&(yy<9999))
    {
if((mm>0)&&(mm<=12))
{
    if((dd>0)&&(dd<=maxdays(mm)))
    {
        return true;
    }
}
    }
}
void date::nextday()
{
    dd++;
    if(dd>maxdays(mm))
    {
        mm++;
        dd=1; 
        if(mm>12)
        {
            yy++;
            mm=1;
        }
    }
}
void date::display()
{cout<<dd <<":"<<mm<<" :"<<yy;}
void date::preday()
{ dd--;
    if(dd<1)
    {
        mm--;
        dd=maxdays(mm);
        if(mm<1)
        {
            yy--;
            mm=12;
             dd=maxdays(mm);
        }
    }
}
int date::greaterday(date d1,date d2)
{
if(d1.dd>d2.dd)
{
    return 1;
}
else if(d1.dd<d2.dd)
{
return 2;
}
else if(d1.dd==d2.dd)
{
    return 3;
}

}
int date::greatermonth(date d1,date d2)
{
   if(d1.mm>d2.mm)
{
    return 1;
} 
else if(d1.mm<d2.mm)
{
return 2;
}
else if(d1.mm==d2.mm)
{
return 3;
}
}
int date::greateryear(date d1,date d2)
{
   if(d1.yy>d2.yy)
{
    return 1;

} 
else if(d1.yy<d2.yy)
{
return 2;
}
else if(d1.yy==d2.yy)
{
return 3;
}
}
void date::menu()
{
    cout<<"Enter\n1:to increment the already present date\n2:to decrement thr already present date\n3:to increment the date enter by user\n4:to decrement the date enter by the the user\n5:to find the greater date enter by user\n6:to find the no of days between two dates enter by user "<<endl;
}
 void date::noofdays(date d1,date d2)
{
    int days=0;
    int i;
    if(d1.dd>=d2.dd)
    {
 days+=d1.dd-d2.dd;
    }
    else{
        days+=d2.dd-d1.dd;
    }
    if(d1.mm>=d2.mm)
    {
 for( i=d2.mm;i<d1.mm;i++)
 {
     days+=maxdays(i);
 }
 }
 else
 {
      for(i=d1.mm;i<d2.mm;i++)
 {
     days+=maxdays(i);
 }
}
cout<<"No of days between two dates are:"<<days<<endl;
}
void date::greaterdate(date d1,date d2)
{
    if(greateryear(d1,d2)==1)
    {
       cout<< "greater date is"<<d1.dd<<":"<<d1.mm<<":"<<d1.yy<<endl;
    
    }
    else if(greateryear(d1,d2)==2)
    {
 cout<< "greater date is"<<d2.dd<<":"<<d2.mm<<":"<<d2.yy<<endl;
    }
    else if(greateryear(d1,d2)==3)
    {
       if(greatermonth(d1,d2)==1) 
       {
           cout<< "greater date is"<<d1.dd<<":"<<d1.mm<<":"<<d1.yy<<endl;
      
        }
         if(greatermonth(d1,d2)==2) 
       {
cout<< "greater date is"<<d2.dd<<":"<<d2.mm<<":"<<d2.yy<<endl;
       }
        else if(greatermonth(d1,d2)==3)
        {
            if(greaterday(d1,d2)==1)
            {
               cout<< "greater date is"<<d1.dd<<":"<<d1.mm<<":"<<d1.yy<<endl;
       
            }
            else if(greaterday(d1,d2)==2)
        {
           cout<< "greater date is"<<d2.dd<<":"<<d2.mm<<":"<<d2.yy<<endl;
  
        }
         else if(greaterday(d1,d2)==3)
         {
             cout<<"both dates are equal"<<endl;
         }
        }
    }
}

