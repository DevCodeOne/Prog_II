#include "simpletest.h"
#include "complexnumber.h"

SIMPLETEST("Complex Number Test") {
	complexnumber c; 
	return c.is_real();
};

SIMPLETEST("Complex Number Test 2") {
	complexnumber c; 
	return !c.is_imag();
};

int main(int argc, char *argv[]) {
	return 0;
}
