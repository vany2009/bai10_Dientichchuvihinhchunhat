#include<iostream>
using namespace std;
int main()
{
	cout << "TINH DIEN TICH VA CHU VI HINH CHU NHAT\n";
	double dai, rong, chuvi, dientich;

	cout << "Nhap chieu dai:"; cin >> dai;
	cout << "Nhap chieu rong:"; cin >> rong;


	chuvi = (dai + rong) * 2;
	dientich = dai * rong;


	cout << "chu vi:" << chuvi << endl;
	cout << " Dien tich:" << dientich << endl;

	return 0;

}