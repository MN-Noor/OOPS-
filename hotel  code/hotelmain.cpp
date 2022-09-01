#include<iostream>
#include<string>
#include"hotel.h"

using namespace std;
int room::n=200;

int main()
{
    char ch;
    hotel h;   
  
do
{

 h.menu();
 cin>>ch;

    if (ch=='1')
{
    int rn;
    cout<<"Enter  the room no which you want to book from room no 200-250"<<endl;
    cin>>rn;
    if(rn>200&&rn<250)
  { 
      int p;
      p=h.findroomno(rn);
      h.booking(p);
  }
  else
  {

      cout<<"invalid room no"<<endl;
  }

}
else if (ch=='2')
{
    int romno;
    int pos;
    cout<<"Enter your room no which you want to vacate\nroom no:";
    cin>>romno;
    if(romno>200&&romno<250)
    {
pos=h.findroomno(romno);
h.checkout(pos);
    }
}
else if(ch=='3')
{
   h.findid();
}
else if(ch=='4')
{
    cout<<"free rooms in hotel are:"<<endl;
   h.freerooms();
}
else if(ch=='5')
{
    h.displayinfo();
}
else if(ch=='6')
{
    cout<<"Exiting Program";
}
}while(ch!='6');

    return 0;
}
