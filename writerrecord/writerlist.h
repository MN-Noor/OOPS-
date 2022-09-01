#ifndef writerlist_H
#define writerlist_H
#include<string>

using namespace std;
#include"writer.h"

class writerlist
{
writer w[5];
public:
void get();
void show();
bool findwriter();
bool findbookw(string t);
void menu();
};
#endif