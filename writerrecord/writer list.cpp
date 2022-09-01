#include"book.h"
#include"writer.h"
#include"writerlist.h"
#include<iostream>
#include<string>
using namespace std;
void writerlist::get()
{
    for(int i=0;i<5;i++)
    {
        w[i].getinfo();
    }
}
void writerlist::show()
{
    for(int i=0;i<5;i++)
    {
        w[i].showinfo();
    }
}
bool writerlist::findwriter()
{    
    string inname;
    cout<< "entre writer name"<<endl;
    cin>>inname;
for(int i=0;i<5;i++)
{
    if(inname==w[i].tellname())
    {
w[i].showinfo();
    return true;
    }
    cout<< "not found"<<endl;
}
}
bool writerlist::findbookw(string t)
{
for(int i=0;i<5;i++)
{
    if(w[i].findbook(t)==true)
    {
w[i].showinfo();
return true;
    }
}
cout<<"Not found"<<endl;
return false;
}
void writerlist::menu()
{
    cout<<"enter\n 1:to didplay info\n2:to find writer by name\n3:find book by title"<<endl;
}