#include "calc.h"


void Calc::age_calc(struct1 bdate, struct1 cdate) {
	int dtest = cdate.day - bdate.day;
	if (dtest < 0) {
		RDAY = legal_month_value - bdate.day + cdate.day - 1;
		cdate.month = cdate.month - 1;
	}
	else {
		RDAY = cdate.day - bdate.day;
	}

	int mtest = cdate.month - bdate.month;
	if (mtest < 0) {
		RMONTH = 12 - bdate.month + cdate.month;
		cdate.year = cdate.year - 1;
	}
	else {
		RMONTH = cdate.month - bdate.month;
	}

	RYEAR = cdate.year - bdate.year;
}