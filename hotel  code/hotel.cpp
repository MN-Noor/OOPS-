#include<string>
#include"hotel.h"
using namespace std;

int hotel::findroomno(int rn)
{
    for(int i=0;i<50;i++)
    {
        if(r[i].tellroomno()==rn)
        {
            return i;
        }
    }
}
void hotel::booking(int p)
{
if(r[p].tellstatus()==0)
{
    cout<<"This room is not reserverd\n to reserve it please enter the following information"<<endl;
 r[p].ginfo();
 r[p].statusupdate();
 cout<<"This room "<<r[p].tellroomno()<<"is reserved by you\nthanks"<<endl;
}
else if(r[p].tellstatus()==1)
{
cout<<" this room is already reserverd"<<endl;
}
}
void hotel::menu()
{
cout<<"1:Book a room\n2:Check out\n3:Find Person by ID card number\n4:Display room numbers of free rooms\n5: Display information of all the rooms\n6:Exit."<<endl;
}
void hotel::checkout(int p)
{
r[p].display();
r[p].statuscheckout();
cout<<"you have successfully vacated this room"<<endl;
}
void hotel::freerooms()
{
    for(int i=0;i<50;i++)
    {
        r[i].findfree();
    }
}
void hotel::findid()
{
int idi;
cout<<"Enter the id number of person which you want to find "<<endl;
cin>>idi;
    for(int i=0;i<50;i++)
    {
        if(r[i].findid(idi)==true)
        {
           r[i].display();
        }

    }
}
void hotel:: displayinfo()
{
    for(int i=0;i<50;i++)
    {
       if( r[i].tellstatus()==1)
       {
        r[i].display();
        cout<<"status: reserved"<<endl;
       }
      else 
       {
       cout<<"room no:"<<r[i].tellroomno()<<endl;
       cout<<"Status:"<<"not reserved"<<endl;
        }

    }
   
}