#ifndef DATE_H
#define DATE_H 
class date
{
private:
	int dd;
	int mm;
	int yy;
public:
	date();

	date(int d, int m, int y);
	void get();
	int maxdays(int mm);
	void nextday();
	bool isvalid();
	void preday();
	void display();
	void menu();
	void noofdays(date d1,date d2);
	int greaterday(date d1,date d2);
	int greatermonth(date d1,date d2);
	int greateryear(date d1,date d2);
void greaterdate(date d1,date d2);
};

#endif // TIME_H