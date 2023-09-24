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

	return 0;
}