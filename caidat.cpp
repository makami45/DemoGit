#include "thuvien.h"

void nhap_songuyen(int& n) {
	do {
		cout << "Nhap so nguyen n (n>0): ";
		cin >> n;
	} while (n <= 0);
}
void hienthi_menu() {
	cout << "\n====================================" << endl;
	cout << "====================================" << endl;
}
bool kt_snt(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) count++;
		if (count == 2) return true;
		return false;
	}
}
bool kt_scp(int n) {
	int sqr = sqrt(n);
	if (sqr * sqr == n) return true;
	return false;
}
bool kt_sht(int n) {
	int sum = 0;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) sum += i;
		if (sum == n) return true;
		return false;
	}
}