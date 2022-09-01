
#include"record.h"
#include<fstream>
#include<iostream>
using namespace std;
void record::read()
{
    string s1,s2,s3,s4,s5;
    
    ifstream file1("file.txt");
    
for(int i=0;i<7;i++)
{
getline(file1,s1,':');
getline(file1,s2,':');
getline(file1,s3,':');
getline(file1,s4,':');
getline(file1,s5);

if(s1[0]=='C')
{
    p[i]=new checking (stoi(s3),s4,stoi(s5),stoi(s2));


}
else if(s1[0]=='S')
{
    p[i]=new saving (stoi(s3),s4,stoi(s5),stof(s2));

}
}
}
void record::withdraw_amount()
{
    int id;
    bool found=false;
  int pos;
    cout<<"Enter your bank_id to withdraw amount"<<endl;
    cin>>id;
    for(int i=0;i<7&&found==false;i++)
{
if(id==p[i]->tellaccno())
{
pos=i;
found=true;
  }
}
if(found==true)
{
    int b;
    p[pos]->show();
    cout<<"This is the information of your current balance and account"<<endl;
    cout<<"Enter the amount which you want to withdraw"<<endl;
    cin>>b;
    p[pos]->withdraw(b);
}
else if(found==false)
{
    cout<<" no account no is found"<<endl;
}  
}
void record::Display()
{for(int i=0;i<7;i++)
{
    p[i]->show();
}

}
void record::checking_balance()
{
  int id;
    bool found=false;
  int pos;
    cout<<"Enter your bank_id to check balance"<<endl;
    cin>>id;
    for(int i=0;i<7&&found==false;i++)
{
if(id==p[i]->tellaccno())
{
pos=i;
found=true;
  }   
}
if(found==true)
{
    cout<<"This is the information of your current balance "<<p[pos]->tellbalance()<<endl;
}
else if(found==false)
{
    cout<<" no account no is found"<<endl;
}  
}
void record::findby_accno()
{
int id;
    bool found=false;
  int pos;
    cout<<"Enter your bank_id find your account"<<endl;
    cin>>id;
    for(int i=0;i<7&&found==false;i++)
{
if(id==p[i]->tellaccno())
{
pos=i;
found=true;
  }   
}
if(found==true)
{
    cout<<"Information of your Account"<<endl;
  p[pos]->show();
}
else if(found==false)
{
    cout<<" no account no is found"<<endl;
}  
}
void record::deposit_amount()
{
    int id;
    bool found=false;
  int pos;
    cout<<"Enter your bank_id to deposit amount"<<endl;
    cin>>id;
    for(int i=0;i<7&&found==false;i++)
{
if(id==p[i]->tellaccno())
{
pos=i;
found=true;
  }   
}
if(found==true)
{
    int amt;
    cout<<"Enter the amount which you want to deposit"<<endl;
    cin>>amt;
    p[pos]->deposit(amt);
  p[pos]->show();
}
else if(found==false)
{
    cout<<" no account no is found"<<endl;
}  
}
void record::update_information()
{
    int id;
    bool found=false;
  int pos;
    cout<<"Enter your bank_id to update information"<<endl;
    cin>>id;
    for(int i=0;i<7&&found==false;i++)
{
if(id==p[i]->tellaccno())
{
pos=i;
found=true;
  }   
}
if(found==true)
{
p[pos]->get();
}
else if(found==false)
{
    cout<<" no account no is found"<<endl;
}  
}
void record::write()
{
    ofstream file1("output.txt");
 for(int i=0;i<7;i++)
{ 
   
   file1<<p[i]->save()<<endl;
  
   
}
 file1.close(); 

}


