#include "getinfo.h"

// define the arrays
int lm[] = { 1, 3, 5, 7, 8, 10, 12 };
int sm[] = { 4, 6, 9, 11 };


// check if the inputs are numbers or not
bool Getinfo::check_number(string ts1, string ts2, string ts3) { //test subject(ts)
	for (int i = 0; i < ts1.length(); i++)
		if (isdigit(ts1[i]) == false)
			return false;
	for (int i = 0; i < ts2.length(); i++)
		if (isdigit(ts2[i]) == false)
			return false;
	for (int i = 0; i < ts3.length(); i++)
		if (isdigit(ts3[i]) == false)
			return false;
	return true;

	//I have to admit, this method is absolute trash
}


// get the the birthday through user input
bool Getinfo::get_bdate() {
	string nc1, nc2, nc3; //number checker (nc)
	cout << "Please input your birthday." << endl;
	cout << "Please input the year: ";
	cin >> nc1;
	cout << "Please input the month: ";
	cin >> nc2;
	cout << "Please input the day: ";
	cin >> nc3;
	if (check_number(nc1, nc2, nc3)) {
		return true;
	}
	else {
		return false;
	}
}


// get the current day (cdate)
void Getinfo::def_cdate() {
	time_t t = time(0);
	tm now;

	localtime_s(&now, &t);

	cdate.year = now.tm_year + 1900;
	cdate.month = now.tm_mon + 1;
	cdate.day = now.tm_mday;

	cout << cdate.year << endl;
	cout << cdate.month << endl;
	cout << cdate.day << endl;
}

