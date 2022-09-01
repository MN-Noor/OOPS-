#include "train.h"
train::train()
{
	 freenumberofseat = 50;
}
void train::book()
{
	int n,id,count=0; int fee = 0;
	string name;
	cout << "Enter the number of seat you want to resevered" << endl;
	cin >> n;

	if (freenumberofseat >= n)
	{
		freenumberofseat = freenumberofseat - n;
		cout << "enter the  name " << endl;
		cin >> name;
		cout << "Enter your id " << endl;
		cin >> id;
		for (int i = 0; i < 50&&count<n; i++)
		{
			if (s[i].tellstatus() == 'F')
			{
				s[i].getinfo(name, id);
				count = count + 1;
				s[i].updatestatus();
				cout << "YOur " << s[i].tellseatno() << " this number of seat is reserved" << endl;
				if (s[i].telltype() == 'w')
				{
					fee = fee + 5000;
					amount1 = amount1 + fee;
				}
				else
				{
					fee = fee + 2500;
					amount1 = amount1 + fee;
				}
			}
			
			
		}

	}
	cout << "Your total bill is  " << fee << endl;
}
void train::cancel()
{
	int seatno1,fee;
	cout << "Enter your seatno you want to cancel" << endl;
	cin >> seatno1;
	for (int i = 0; i < 50; i++)
	{
		if (seatno1 == s[i].tellseatno())
		{
			
			cout << "YOur " << s[i].tellseatno() << " this number of seat is canceled" << endl;
			s[i].updatestatus();
			if (s[i].telltype() == 'w')
			{
				fee = 5000 - 50;
				amount1 = amount1 - fee;
			}
			else
			{
				fee = 2500-25;
				amount1 = amount1 - fee;
			}
		}
	}
	cout << "Your returning amount is " << fee << endl;
	

}
void train::menu()
{
	char choice;
	do
	{
		
		cout << "Enter 1 for booking seat" << endl;
		cout << "Enter 2 for finding person seat by id" << endl;
		cout << "Enter 3 for cancelling seat" << endl;
		cout << "Enter 4 for checking total amount " << endl;
		cout << "Enter 5 for exit" << endl;
		cin >> choice;
		if (choice == '1')
		{
			book();
		}
		else if (choice == '2')
		{
			findid();
		}
		else if (choice == '3')
		{
			cancel();
		}
		else if (choice == '4')
		{
			amount();
		}
		else if (choice == '5')
		{
			cout << "exiting....." << endl;
		}
		else
		{
			cout << "Please enter the right option" << endl;
		}
	} while (choice != '5');
}
void train::findid()
{
	int id;
	cout << "Enter your id " << endl;
	cin >> id;

	for (int i = 0; i < 50; i++)
	{
		
		if (id==s[i].tellidofperson())
		{
			if (s[i].tellstatus() == 'R')
			{
				cout << "The number of seat you is booked" << s[i].tellseatno() << endl;
			}
		}
	}

}
void train::amount()
{
	cout << "The total amount collected is " << amount1 << endl;
}