#include<iostream>
using namespace std;
#define Max_size 100
class Complex {
private:
	int thuc;
	int ao;
public:
	Complex();
	void setThuc(int);
	void setAo(int);
	int getThuc(int);
	int getAo(int);
	void nhap();
	void xuat();
	void nhapDS(Complex a[] ,int &n );
	friend Complex operator +(Complex x, Complex y);
	friend Complex operator -(Complex x, Complex y);
	void Cong(Complex a[],int n);
};
Complex::Complex()
{
	this->ao = 0;
	this->thuc = 0;
}
//void Complex::setAo(int ao)
//{
//	this->ao = ao;
//}
//void Complex::setThuc(int thuc)
//{
//	this->thuc = thuc;
//}
//int Complex::getThuc(int thuc)
//{
//	return this->thuc;
//}
//int Complex::getAo(int ao)
//{
//	return this->ao;
//}
void Complex::nhap()
{
	cout << " \nnhap phan thuc: ";
	cin >> this->thuc;
	cout << "\n nhap phan ao : ";
	cin >> this->ao;

}
void Complex::xuat()
{
	if (ao < 0)
	{
		cout << thuc << "-" << ao<<"i";
	}
	else
	{
		cout << thuc << "+" << ao <<"i";
	}
}
Complex operator +(Complex x, Complex y)
{
	Complex t;
	t.thuc = x.thuc + y.thuc;
	t.ao = x.ao + y.ao;
	return t;
}
Complex operator-(Complex x, Complex y)
{
	Complex t;
	t.thuc = x.thuc - y.thuc;
	t.ao = x.ao - y.ao;
	return t;
}
void Complex::nhapDS(Complex a[],int &n)
{
	
	cout << "Nhap danh sach số phuc: ";
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		a[i].nhap();
	}
}

 void Complex::Cong(Complex a[],int n)
{
	 Complex Sum;
	for (int i = 1;i <= n;i++)
	{
		Sum = a[i]+ Sum;
	}
	Sum.xuat();
}
int main()
{  
	Complex a[Max_size], b,c;
	int n;
	b.nhapDS(a, n);
	b.Cong(a, n);

	
	return 0;
}