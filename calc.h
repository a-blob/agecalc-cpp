// basic header stuff
#pragma once
#ifndef CALC__H__
#define CALC__H__
#include <iostream>
#include "getinfo.h"
using namespace std;


// define everything here
class Calc: public Getinfo {
public:
	int RDAY;
	int RMONTH;
	int RYEAR;

	void age_calc(struct1 bdate, struct1 cdate);
};

#endif // !GETINFO__H__
// if ends here