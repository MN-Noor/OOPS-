#pragma once
#include"seats.h"
class train
{
	seat s[50];
	int freenumberofseat; int amount1 = 0;
	
public:
	train();
	void book();
	void menu();
	void cancel();
	void findid();
	void amount();
};