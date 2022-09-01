#pragma once
#include<iostream>

#include<string>
using namespace std; 
class passenger

{
	int ID; string name,fee; 
public:
	void get(string name, int ID);
	
	int tellid();
};