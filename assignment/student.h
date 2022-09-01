#pragma once
#include<iostream>
#include<string>
using namespace std;
class student
{
    string name;
    string rollno;
float internal;
float finel;
char grade;
float gpa;
public:
void get();
void show();
bool fname(string n);
bool froll(string r);

void calculate();

};