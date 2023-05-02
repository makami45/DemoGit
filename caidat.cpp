#include "thuvien.h"

void nhap_songuyen(int& n) {
	do {
		cout << "\nNhap so nguyen n (n>0): ";
		cin >> n;
	} while (n <= 0);
}
void nhap_arr1(int arr1[], int n) {
	cout << "\nNhap mang 1 chieu!!" << endl;
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> arr1[i];
	}
}
void nhap_arr2(int arr2[][KTM], int n) {
	cout << "\nNhap mang 2 chieu!!" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Nhap a[" << i << "][" << j << "]:";
			cin >> arr2[i][j];
		}
	}
}
bool kt_snt(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return false;
	return true;
}
bool kt_scp(int n) {
	if (n < 1) return false;
	int sqr = sqrt(n);
	if (sqr * sqr == n) return true;
	return false;
}
bool kt_sht(int n) {
	if (n < 1) return true;
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) sum += i;
	}
	if (sum == n) return true;
	return false;
}
void hienthi_menu() {
	cout << "\n==============================================" << endl;
	cout << "1.Kiem tra so nguyen to!!" << endl;
	cout << "2.Kiem tra so chinh phuong!!" << endl;
	cout << "3.Kiem tra so hoan thien!!" << endl;
	cout << "4.Nhap mang 1 chieu!!" << endl;
	cout << "5.xuat mang 1 chieu!!" << endl;
	cout << "6.Nhap mang 2 chieu!!" << endl;
	cout << "7.xuat mang 2 chieu!!" << endl;
	cout << "0.Thoat chuong trinh!!" << endl;
	cout << "==============================================" << endl;
}
void chon_menu(int arr1[], int arr2[][KTM], int n) {
	int chon;
	do {
		cout << "\nVui long nhap lua chon cua ban: ";
		cin >> chon;
		switch (chon)
		{
		case 1:
			system("cls");
			nhap_songuyen(n);
			if (kt_snt(n) == true) cout << n << " la so nguyen to!!" << endl;
			else cout << n << " khong phai la so nguyen to!!" << endl;
			hienthi_menu();
			break;
		case 2:
			system("cls");
			nhap_songuyen(n);
			if (kt_scp(n) == true) cout << n << " la so chinh phuong!!" << endl;
			else cout << n << " khong phai la so chinh phuong!!" << endl;
			hienthi_menu();
			break;
		case 3:
			system("cls");
			nhap_songuyen(n);
			if (kt_sht(n) == true) cout << n << " la so hoan thien!!" << endl;
			else cout << n << " khong phai la so hoan thien!!" << endl;
			hienthi_menu();
			break;
		case 4:
			system("cls");
			nhap_songuyen(n);
			nhap_arr1(arr1, n);
			break;
		case 5:
			system("cls");
			nhap_songuyen(n);
			nhap_arr1(arr1, n);
			cout << "\nMang 1 chieu co cac phan tu la!!" << endl;
			for (int i = 0; i < n; i++) {
				cout << arr1[i] << " ";
			}
			break;
		case 6:
			system("cls");
			nhap_songuyen(n);
			nhap_arr2(arr2, n);
			break;
		case 7:
			system("cls");
			nhap_songuyen(n);
			nhap_arr2(arr2, n);
			cout << "\nMang 2 chieu co cac phan tu la!!" << endl;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					cout << arr2[i][j] << " ";
				}
				cout << endl;
			}
			break;
		default:
			break;
		}
	} while (chon != 0);
}