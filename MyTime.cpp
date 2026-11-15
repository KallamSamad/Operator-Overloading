#include "MyTime.h"
#include <iostream>
using namespace std;
MyTime::MyTime(int totalseconds) : totalseconds(totalseconds) {
	
	hours = totalseconds / 3600;
	totalseconds -= hours * 3600;
	minutes = totalseconds/ 60;
	seconds = totalseconds - (minutes * 60);
}

MyTime::~MyTime() {



}

MyTime& MyTime:: operator=(const MyTime& rhs) {

	if (this != &rhs) {
		hours = rhs.hours;
		minutes = rhs.minutes;
		seconds = rhs.seconds;
		totalseconds = rhs.totalseconds;
	}
	return *this;
}


const MyTime MyTime::operator+(const int seconds) const {

	MyTime t((3600 * hours) + (60*minutes) + this->seconds + seconds);
	return t;
}

const MyTime MyTime::operator+(const MyTime& rhs) const {
	MyTime t(this->hours*3600 + rhs.hours*3600 + this->minutes*60 + rhs.minutes*60 + this->seconds + rhs.seconds);
	return t;
}

bool MyTime::operator<(const MyTime& rhs) const {
	if (this->totalseconds < rhs.totalseconds) {
		return true;
	}
	else {
		return false;
	}
}

bool MyTime::operator>=(const MyTime& rhs) const {
	if (this->totalseconds == rhs.totalseconds) {
		return true;
	}
	else if (this->totalseconds > rhs.totalseconds) {
		return true;
	}
	else {
		return false;
	}
}

bool MyTime::operator==(const MyTime& rhs) const {

	return this->totalseconds == rhs.totalseconds;
}


bool MyTime::operator!=(const MyTime& rhs) const {
	return this->totalseconds != rhs.totalseconds;
}

MyTime& MyTime::operator+=(const MyTime& rhs) {
	this->totalseconds += rhs.totalseconds;
	int remainder = this->totalseconds;
	this->hours = remainder / 3600;
	remainder %= 3600;
	this->minutes = remainder / 60;
	this->seconds = remainder % 60;

	return *this;
}

MyTime& MyTime::operator++() {
	this->totalseconds += 1;
	int remainder = this->totalseconds;
	this->hours = remainder / 3600;
	remainder %= 3600;
	this->minutes = remainder / 60;
	this->seconds = remainder % 60;


	return *this;
}

MyTime MyTime::operator++(int){
	MyTime temp = *this;

	this->totalseconds += 1;

	int remainder = this->totalseconds;
	this->hours = remainder / 3600;
	remainder %= 3600;

	this->minutes = remainder / 60;
	this->seconds = remainder % 60;

	return temp;
}

void MyTime::display() const {
	cout << hours << ":" << minutes << ":" << seconds << endl;
}