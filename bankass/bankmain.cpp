#include<iostream>
#include"record.h"
#include<fstream>
#include<string>
using namespace std;
int main()
{
	record c;
	int  s;
	c.read();
   
	do
	{
		cout << "enter one for display\n 2 for chck balance\n 3 for withdraw amount\n 4 for deposit account \n 5 for find by account number\n 6 forupdate information of account holder\n7Write information account holders to a file Output.txt\n 8:for exit\n";
		cin >> s;
		if (s == 1)
		{
			c.Display();
		}
		else if (s == 2)
		{
			c.checking_balance();
		}
		else if (s == 3)
		{
			c.withdraw_amount();
		}
		else if (s == 4)
		{
			c.deposit_amount();
		}
		else if (s == 5)
		{
			c.findby_accno();
		}
		else if (s == 6)
		{
			c.update_information();
		}
        else if(s == 7)
        {
        c.write();
        }
		else if (s == 8)
		{
			cout << "exit\n";
		}
		else
		{
			cout << "plz enter correct values\n";
		}
	} while (s != 8);
    return 0;
}