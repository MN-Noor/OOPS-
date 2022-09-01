#include"book.h"
#include<iostream>
#include<string>
using namespace std;
string book::telltitle()
{
    return title;
}
void book::get()
{
    cout<<"Title"<<endl;
    cin>>title;
    cout<<"price"<<endl;
cin>>price;
}
void book::show()
{
    cout<<"Title"<<title<<"\nprice"<<price<<endl;
}
