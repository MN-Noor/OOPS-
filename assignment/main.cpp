#include<iostream>
#include<string>
#include"student.h"
using namespace std;
int main()
{student s[4];
    char ch;
    bool f=false;
    do{
cout<<"1. Get input\n2. Calculate grades\n3:search by name \n4:Show information of particular student by rollnumber\n5: Show information of all students\n";
  cout<<"6:Exit"<<endl;
   cin>>ch;
   if(ch=='1')
   {
       for(int i=0;i<4;i++)
       {
           s[i].get();
       }
   }
  else if(ch=='2')
   {
      for(int i=0;i<4;i++)
       {
           s[i].calculate();
       } 
   }
   else if(ch=='3')
   {string n;
       cout<<"Enter Name:";
       cin>>n;
     for(int i=0;i<4;i++)
       {
         
          if( s[i].fname(n)==true)
          {
              s[i].show();
              f=true;
          }
       } 
       if(f=false) 
       {
cout<<"no student found with this name"<<endl;
       } 
   }
    else if(ch=='4')
   {string r;
       cout<<"Enter rollno:";
       cin>>r;
     for(int i=0;i<4;i++)
       {
         
          if( s[i].froll(r)==true)
          {
              s[i].show();
              f=true;
          }
       } 
       if(f=false) 
       {
cout<<"no student found with this roll no"<<endl;
       } 
   }
   else if(ch=='5')
   {
      for(int i=0;i<4;i++)
       {
           s[i].show();
       }
   }

    }while(ch!='6');
    return 0;
}