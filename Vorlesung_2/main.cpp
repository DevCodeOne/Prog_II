#include <iostream>

#include "main.h"

int main() {
	point p = {0.5, 0.5};
	point p2(0.5, 0.5);
	point p3{0.5, 0.5};
	point p4 = point(0.5, 0.5);
	
	std::cout << "x : " << p.get_x() << " y : " << p.get_y()  << std::endl;
	return 0;
}
