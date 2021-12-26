#pragma once
#include <iostream>
#include <iomanip>

class TimeSpan {
private:
	unsigned int hours;
	unsigned int minutes; // [0 .. 59]
	unsigned int seconds; // [0 .. 59]
public:
	TimeSpan(unsigned int secconds);
	unsigned int getH();
	unsigned int getM();
	unsigned int getS();
	void print();
};