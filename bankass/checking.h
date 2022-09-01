#include"account .h"
#include<iostream>
using namespace std;
class checking:public account
{
    int noof_checks;
    public:
    checking()
    {
        noof_checks=0;

    }
checking(int an,string hn,int b,int nochecks):account(an,hn,b)
    {
noof_checks=nochecks;
    }
void withdraw(int b);
void show();
void get();
string save()
{
     string line1;
       string line2=account::save();
       line1="C:"+line2+":"+to_string(noof_checks);
       return line1;
}
};