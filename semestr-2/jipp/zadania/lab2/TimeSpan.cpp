#include "stdafx.h"
#include "TimeSpan.h"

TimeSpan::TimeSpan(unsigned int seconds) {
	this->seconds = seconds % 60;
	minutes = (seconds / 60) % 60;
	hours = seconds / 3600;
}

unsigned int TimeSpan::getH() {
	return hours;
}

unsigned int TimeSpan::getM() {
	return minutes;
}

unsigned int TimeSpan::getS() {
	return seconds;
}

void TimeSpan::print() {
	std::cout << std::setfill('0') << std::setw(2) << hours << ":";
	std::cout << std::setfill('0') << std::setw(2) << minutes << ":";
	std::cout << std::setfill('0') << std::setw(2) << seconds << std::endl;
}