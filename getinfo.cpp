#include "getinfo.h"
#include <cmath>
#include <string>

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
		bdate.year = stoi(nc1);
		bdate.month = stoi(nc2);
		bdate.day = stoi(nc3);
		cout << "\nYour birthday is: " << bdate.month << "/"
			<< bdate.day << "/" << bdate.year << "\n\n";
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

	cout << "Today is: " << cdate.month << "/"
		<< cdate.day << "/" << cdate.year << "\n\n";

}


// determin if the year is leap year
bool Getinfo::is_leapyear(double subect_year) {
	double year_test = subect_year / 100;
	if (year_test == floor(year_test)) {
		double year_test2 = subect_year / 400;
		if (year_test2 == floor(year_test2)) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		double year_test2 = subect_year / 4;
		if (year_test2 == floor(year_test2)) {
			return true;
		}
		else {
			return false;
		}
	}
}

// determin if the month is flat or odd
void Getinfo::getmonthtype() {
	int monthtype = -1;

	if (is_leapyear(bdate.year)) {
		legal_month_value = 29;
	}
	else {
		legal_month_value = 28;
	}

	bool found = false;

	for (int i = 0; i < sizeof(lm) / sizeof(lm[0]); i++) {
		if (lm[i] == bdate.month) {
			found = true;
			monthtype = 1;
			legal_month_value = 31;
		}
	}
	if (!found) {
		for (int i = 0; i < sizeof(sm) / sizeof(sm[0]); i++) {
			if (sm[i] == bdate.month) {
				found = true;
				monthtype = 0;
				legal_month_value = 30;
			}
		}
	}
cout << "The birth-month is a " << legal_month_value << " day month.\n";
}


bool Getinfo::is_valid() {
	if (bdate.year >= 0 and bdate.month > 0 and bdate.day > 0 and bdate.month <= 12 and bdate.day <= legal_month_value) {
		return true;
	}
	else {
		return false;
	}
}