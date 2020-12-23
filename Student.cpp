#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
	string ten;
	float hk1, hk2,dtb;

public:
	Student()
	{
		this->ten = " ";
		this->hk1 = 0;
		this->hk2 = 0;
		this->dtb = dtb;
	}
	string getTen()
	{
		return ten;
	}
	float getHk1()
	{
		return hk1;
	}
	float getHk2()
	{
		return hk2;
	}

	void nhap()
	{
		cin.ignore();
		cout << "Nhap ten: ";
		getline(cin, ten);
		cin.ignore();
		cout << "Nhap diem hk1,hk2: ";
		cin >> hk1 >> hk2;
	}
	void xuat()
	{
		cout << "ten:" << ten << endl;
		cout << " diem: " << hk1 << " va " << hk2;
	}
	float Dtb();
	friend bool operator >(Student a, Student b)
	{
		if (a.Dtb() > b.Dtb())
		{
			return true;
		}
		else
			return false;

	}
};
float Student::Dtb()
{
	dtb = (hk1 + hk2 * 2) / 3;
	return dtb;
}
int main()
{
	Student sv, sv1, a[100];
	/*sv.nhap();
	
	sv.xuat();
	cout << " dtb sv1: " << sv.Dtb()<<endl;
	cout << "Nhap sv 2: "<<endl;
	sv1.nhap();
	sv1.xuat();
	cout << "dtb sv2: " << sv1.Dtb()<<endl;

	if (sv1 > sv == true)
	{
		cout << "sv có dtb lon nhat: ";
		sv1.xuat();
	}
	else
		cout << "sv có dtb lon nhat: ";
		sv.xuat();*/
	int n;
	cout << "Nhap so luong sinh viên: ";
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cout << "Sinh vien thu:" << i + 1<<endl;
		a[i].nhap();
	}
	int max = a[0].Dtb();
	for (int i = 0;i < n;i++)
	{
		if (a[i].Dtb() <= max)
		{
			max = a[i].Dtb();
		}
	}
	cout << "sinh vien co diem dtb cao nhat la: "<<endl;
	for (int i = 0;i < n;i++)
	{
		if (a[i].Dtb() == max)
		{
			a[i].xuat();
		}
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = i + 1;j < n;j++)
		{
			if (a[i].Dtb() >= a[j].Dtb())
			{
				Student sv = a[i];
				a[i] = a[j];
				a[j] = sv;

			}
		}
	}
	cout << "\nmang tang dan la: "<<endl;
	for (int i = 0;i < n;i++)
	{
		a[i].xuat();
		cout << "\n";
	}

	
	


	return 0;
}