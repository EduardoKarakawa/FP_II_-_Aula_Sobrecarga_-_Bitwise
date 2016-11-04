#include <iostream>
#include "Vetor.h"

int main() {
	Vetor v(5, 8), a(0,0);

	a = v * 2;
	a = v - a;
	std::cout << a<< std::endl;

	system("pause");
	return 0;
}