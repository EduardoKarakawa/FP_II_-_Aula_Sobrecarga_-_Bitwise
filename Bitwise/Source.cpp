#include <iostream>
bool ChecarBit(int n, int p) {
	return (n & (1 << p)) >> p;
}

int SetBit(int n, int p, bool t) {
	n = (t) ? (n ^ (1 << p)) : n & ~(1 << p);
	return n;
}

int main() {
	int num = 17, mask = 1;
	mask = mask << 4;
	int r = SetBit(55, 2, false);
	std::cout << r << "  " << SetBit(r, 2, true) <<std::endl;


	system("pause");
	return 0;
}