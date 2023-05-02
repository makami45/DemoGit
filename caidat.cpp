#include "thuvien.h"

void nhap_songuyen(int& n) {
	do {
		cout << "Nhap so nguye n (n>0): ";
		cin >> n;
	} while (n <= 0);
}