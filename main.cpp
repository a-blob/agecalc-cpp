// basic C++ stuff
#include <iostream>
#include <ctime>
#include "getinfo.h"
using namespace std;


// run everything!
int main() {

	Getinfo run_getinfo;
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
	return 0;
}