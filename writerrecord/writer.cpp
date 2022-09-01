#include"book.h"
#include"writer.h"
#include<iostream>
#include<string>
using namespace std;
void writer::getinfo()
{
    cout<<"name"<<endl;
    cin>>name;
    cout<<"noofbooks"<<endl;
    cin>>noofbooks;
    cout<<"enter the information of books writen by writer"<<endl;
    for(int i=0;i<3&&i<noofbooks;i++)
    {
        b[i].get();
    }
}
void writer::showinfo()
{
    cout<<"name"<<name<<endl;
    cout<<"noofbooks"<<noofbooks<<endl;
for(int i=0;i<3&&i<noofbooks;i++)
    {
        b[i].show();
    }
}
string writer::tellname()
{
    return name;
}

bool writer::findbook(string t)
{
    for(int i=0;i<3&&i<noofbooks;i++)
    {
        if(t==b[i].telltitle())
        {
return true;
        }
    }
        return false;
    }
