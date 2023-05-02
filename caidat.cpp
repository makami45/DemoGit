#include "thuvien.h"

void nhap_songuyen(int& n) {
	do {
		cout << "Nhap so nguyen n (n>0): ";
		cin >> n;
	} while (n <= 0);
}
bool kt_snt(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) count++;
		if (count == 2) return true;
		return false;
	}
}