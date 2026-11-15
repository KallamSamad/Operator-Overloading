#pragma once
#include <iostream>
using namespace std;
class MyTime
{
public:

	MyTime(int totalseconds);
	~MyTime();
	MyTime& operator=(const MyTime& rhs);
	const MyTime operator+(const int seconds) const;
	const MyTime operator+(const MyTime& rhs) const;
	bool operator<(const MyTime& rhs) const;
	bool operator>=(const MyTime& rhs) const;
	bool operator==(const MyTime& rhs) const;
	bool operator!=(const MyTime& rhs) const;
	MyTime& operator+=(const MyTime& rhs);
	MyTime& operator++();
	MyTime operator++(int);
	void display() const;
	friend ostream& operator<<(ostream& os, const MyTime& rhs);
	friend istream& operator>>(istream& in,  MyTime& rhs);

 private:
	int hours=0;
	int minutes=0;
	int seconds=0;
	int totalseconds=0;
};

inline ostream& operator<<(ostream& os, const MyTime& rhs)
{
	 
	cout << rhs.hours << ":"<<rhs.minutes <<":" <<rhs.seconds;
	return os;
}

inline istream& operator>>(istream& in, MyTime& rhs)
{
	cout << "Give hours"<<"\n";
	cout << "Give Miniutes"<<"\n";
	cout << "Give seconds"<<"\n";
	in >> rhs.hours >> rhs.minutes >> rhs.seconds;
	return in;
}