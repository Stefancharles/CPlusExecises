#include "iostream"

using namespace std;

struct time
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int seconds;
};

void main()
{
	time one;
	cout << "Input your date(year): "; cin >> one.year;
	cout << "Input your date(month: )"; cin >> one.month;
	cout << "Input your date(day): "; cin >> one.day;
	cout << "Input your date(hour): "; cin >> one.hour;
	cout << "Input your date(minute): "; cin >> one.minute;
	cout << "Input your date(seconds): "; cin >> one.seconds;
	cout << "\n\nThis is your time: " << one.year << "-" << one.month << "-" << one.day << " " 
		<< one.hour << ":" << one.minute << ":" << one.seconds;
}