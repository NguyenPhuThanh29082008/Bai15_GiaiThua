// Bai15_GiaiThua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "Giai thua\n";
	int so, giaithua = 1;
	cout << "Nhap so de tinh giai thua: "; cin >> so;

	for (int i = 1; i <= so; i++)
	{
		giaithua *= i;
	}
	cout << "Vay " << so << "! = " << giaithua << endl;
	return 0;
}
