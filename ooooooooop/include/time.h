#ifndef TIME_H
#define TIME_H

class time
{
private:
	int hr;
	int min;
	int sec;
public:
	time();
	time(int h, int m, int s);
	void increment();
	void display();
	void get();
	bool isvalid();
	void drecrement();
};

#endif // TIME_H