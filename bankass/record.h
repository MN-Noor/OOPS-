#pragma once
#include"saving.h"
#include"checking.h"
class record
{
    account *p[12];
public:
void read();
void withdraw_amount();
void Display();
void checking_balance();
void findby_accno();
void deposit_amount();
void update_information();
void write();
};