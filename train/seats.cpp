#include "seats.h"
#include<iostream>
#include<string>
using namespace std;
seat::seat()
{
	num++;
	seatno = num;
	
	status = 'F';

	if (seatno % 5 == 0)
	{
		type = 'w';
	}
	else
	{
		type = 'n';
	}
}
void seat::getinfo(string n,int i)
{
	p.get(n, i);
}
void seat::updatestatus()
{
	if (status =='F')
	{
		status = 'R';
	}
	else if(status=='R')
	{
		status = 'F';
	}
}
char seat::tellstatus()
{
	return status;
}
int seat::tellidofperson()
{
	int n=0;
	n = p.tellid();
	return n;
}
int seat::tellseatno()
{
	return seatno;
}
char seat::telltype()
{
	return type;
}