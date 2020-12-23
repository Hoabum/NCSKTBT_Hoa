#pragma once
class Mydate
{
private:
	int ngay;
	int thang;
	int nam;
public:
	Mydate();
	void Nhap();
	void Xuat();
	friend Mydate operator >=(Mydate x, Mydate y);
	Mydate ss();
};

