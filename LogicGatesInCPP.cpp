#include <iostream>
#include "Include/LogicGateLibrary/LogicGateLibrary.h"

int main() {

	Numeric<> six(6);
	Numeric<> five(5);

	std::cout << static_cast<int>(Or<>(&Numeric<>(6), &Numeric<>(5)).operation()) << std::endl;

	return 0;
}