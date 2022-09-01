#pragma once
#include<string>
#include"passenger.h"
using namespace std;
class seat
{
	int seatno,  fee;
	static int num;
	
	char status, type; passenger p;
public:
	seat();
	void getinfo(string n, int id);
	void updatestatus();
	char tellstatus();
	char telltype();
	int tellidofperson();
	int tellseatno();
};