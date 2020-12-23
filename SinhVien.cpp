#include<iostream>
#include<string>
using namespace std;
class SinhVien {
private:
	string name;
	int msv;
public:
	void nhap()
	{
		cout << "Nhap name: ";
		cin >> name;
		cout << "Nhap msv: ";
		cin >> msv;
	}
};
class Ds :public SinhVien
{
public:
	void Nhap();
};
void Ds::Nhap()
{
	int n;
	cout << "\nNhap so ds: "<<endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		nhap();
	}
}
int main()
{
	
	Ds ds;
	ds.Nhap();
	return 0;
}