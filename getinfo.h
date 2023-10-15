// basic header stuff
#pragma once
#ifndef GETINFO__H__
#define GETINFO__H__
#include <iostream>
using namespace std;


// define everything here
struct struct1 { int year; int month; int day; };


// define the class
class Getinfo {
public:

	struct1 bdate;
	struct1 cdate;

	int monthtype;
	int legal_month_value;

	bool check_number(string ts1, string ts2, string ts3);
	bool get_bdate();
	void def_cdate();
	bool is_leapyear(double subject_year);
	void getmonthtype();
	bool is_valid();
//private:
	//bool isWholeNumber(double num);
};

#endif // !GETINFO__H__
// if ends here