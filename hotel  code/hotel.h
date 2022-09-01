#ifndef hotel_h
#define hotel_h
#include<string>
#include"room.h"
using namespace std;
class hotel
{
    room r[50];
    public:
 
    int findroomno(int rn);
    void booking(int p);
    void menu();
    void checkout(int p);
    void freerooms();
    void findid();
    void displayinfo();


};
#endif