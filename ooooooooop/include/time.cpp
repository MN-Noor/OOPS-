#include "time.h"
#include<iostream>
using namespace std;
void time::display()
{
	cout << hr << ":" << min << ":" << sec << endl;
}

bool time::isvalid()
{
	if (hr >= 1 && hr <= 12)
	{
		if (min >= 0 && min <= 59)
		{
			if (sec >= 0 && sec <= 59)
			{
				return true;

			}
			else return false;
		}
		else return false;
	}
	else return false;
}
void time::get()
{
	do
	{
		cout << "enter a hour";
		cin >> hr;
		cout << "enter a min";
		cin >> min;
		cout << "enter a sec";
		cin >> sec;
		if (isvalid() == false)
		{
		}
	} while (isvalid() == false);
}
void time::increment()
{
	sec++;
	if (sec > 59)
	{
		min++;
		sec = 0;
	}
	if (min > 59)
	{
		hr++;
		min = 0;
	}
	if (hr > 1)
	{
		hr = 1;
	}


}
void time::drecrement()
{
	sec--;
	if (sec < 0)
	{
		min--;
		sec =59;
	}
	if (min < 0)
	{
		hr--;
		min =59;
	}
	if (hr < 1)
	{
		hr = 12;
	}

}
time::time()
{
	hr = 6;
	min = 49;
	sec = 23;
}
time::time(int h, int m, int s)
{
	hr = h;
	min = m;
	sec = s;
	if (isvalid() == false)
		get();
}