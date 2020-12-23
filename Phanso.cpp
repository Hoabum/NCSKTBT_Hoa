#include<iostream>
#include "Phanso.h"
using namespace std;
#define size 100
Phanso::Phanso()
{
	this->tu = 0;
	this->mau = 1;
}
void Phanso::rutGon()
{
	if (tu != 0)
	{
		int a, b;
		Phanso ps;
		ps.tu = this->tu;
		ps.mau = this->mau;
		a = abs(ps.tu);
		b = abs(ps.mau);
		while (a != b)
		{
			if (a > b)
			{
				a -= b;
			}
			else
			{
				b -= a;
			}
		}
		tu = tu / a;
		mau = mau / a;
	}
}
void Phanso::ouput()
{
	rutGon();
	if (tu == 0)
		cout << "KQ : 0";
	else if (mau == 1)
		cout << "Phan so : " << tu;
	else
		cout << "Phan so : " << tu << "/" << mau;
}
void Phanso::input()
{
	
		cout << "\nNhap tu so : "; cin >> tu;
		cout << "Nhap mau so : "; cin >> mau;
		while (mau == 0)
		{
			cout << "Nhap lai : "; cin >> mau;
		}
	
}
//int Phanso::getT()
//{
//	return this->tu;
//}
//int Phanso::getM()
//{
//	return this->mau;
//}

//Phanso operator ==(Phanso ps1, Phanso ps2)
//{
//	Phanso ps;
//	ps.tu = ps1.tu == ps2.tu;
//	ps.mau = ps1.mau == ps2.mau;
//		return ps;
//}
Phanso operator + (Phanso a, Phanso b) {
	Phanso c; // lưu giá trị sau cộng 
	c.tu = a.tu * b.mau + b.tu * a.mau;
	c.mau = a.mau * b.mau;
	return c;
}
int main()
{

	//cout << "Nhap phan so 1: "<< endl;
	//Ps1.input();
	//Ps1.rutGon();
	//
	//Ps1.ouput();
	//cout << "\nNhap Phan so 2: " << endl;
	//Ps2.input();
	//Ps2.rutGon();
	//Ps2.ouput();
	//ps= Ps1 == Ps2;
	//ps.ouput();
	//ps = Ps1 + Ps2;
	//cout << "Tong: ";
	//ps.ouput();
	Phanso a[size], tong, ps1, ps2;
	int n;
	cout << "\nNhap so luong phan so: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan so thu " << i + 1 << " :";
		a[i].input();
		a[i].ouput();
		cout << endl;
		tong = tong + a[i];
	}
	cout << "\n\n\tTong cac phan so la: ";
	tong.ouput();
	cout << endl;
	system("pause");
	return 0;
}