#include<iostream>
#include<string>
#include"writerlist.h"


using namespace std;
int main()
{char ch;
    writerlist l;
    l.get();
    l.menu();
    cin>>ch;
    
    if(ch=='1')
    {
        l.show();
    }
else if(ch=='2')
{
    l.findwriter();
}
else if(ch=='3')
{
    string t;
    cout<<"Enter book title"<<endl;
    cin>>t;
    l.findbookw(t);
}
}