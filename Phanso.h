#pragma once
class Phanso
{
private:
	int tu;
	int mau;
public:
	Phanso();
	void input();
	void ouput();
	int getT();
	int getM();
	void rutGon();
	friend Phanso operator ==(Phanso ps1, Phanso ps2);
	friend Phanso operator +(Phanso a, Phanso b);
	friend Phanso operator -(Phanso ps1, Phanso ps2);

};

