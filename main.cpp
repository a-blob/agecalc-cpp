// basic C++ stuff
#include <iostream>
#include <ctime>
#include "getinfo.h"
#include "calc.h"
using namespace std;


// run everything!
int main() {

	Getinfo run_getinfo;
	Calc run_calc;

	run_getinfo.def_cdate();

	while (run_getinfo.get_bdate() == false) {
		cout << "Please input valid numbers!\n\n";
	}

	if (run_getinfo.is_leapyear(run_getinfo.bdate.year)) {
		cout << "Is birth-month leap year: True" << endl;
	}
	else {
		cout << "Is birth-month leap year: False" << endl;
	}

	run_getinfo.getmonthtype();

	if (run_getinfo.is_valid()) {
		cout << "Your date is valid.";
	}
	else {
		cout << "Your date is invalid.";
	}
	

	run_calc.age_calc(run_getinfo.bdate, run_getinfo.cdate);
	cout << "\n\nToday you are " << run_calc.RYEAR << " year(s), " << run_calc.RMONTH << " month(s), " << run_calc.RDAY << " day(s) old.\n\n";

	return 0;
}