#ifndef writer_h
#define writer_h
#include"book.h"
#include<string>
using namespace std;
class writer
 {
book b[3];
string name;
int noofbooks;
public:
void getinfo();
void showinfo();
string tellname();
bool findbook(string t);


};



#endif