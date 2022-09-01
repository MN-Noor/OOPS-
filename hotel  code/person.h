#ifndef PERSON_H
#define PERSON_H
#include<string>
#include<iostream>
using namespace std;
class person
{
    string name;
    int id;
    int phoneno;
public:
void getinfo();
void show();
int tellid();
};
#endif