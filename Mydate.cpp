#include<iostream>
#define MaxDate 100
using namespace std;


class DATE
{
private:
	int day;
	int month;
	int year;
public:
	DATE()
	{
		day = month = year = 0;
	}
	~DATE() {}
	void Input();
	void Print_DATE();
	friend bool operator > (DATE a, DATE b);
	void Permutation();
};
void DATE::Input()
{

	do
	{
		cout << "\nEnter to year: "; cin >> year;
	} while (year < 1);
	if (year % 400 == 0 || (year / 4 == 0 && year / 100 == 0))
	{
		do
		{
			cout << "Enter to month: "; cin >> month;
		} while (month < 1 || month >= 12);
		if (month == 2)
		{
			do {
				cout << "Enter to day: "; cin >> day;
			} while (day > 29 || day < 1);
		}
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			do {
				cout << "Enter to day: "; cin >> day;
			} while (day > 31 || day < 1);
		}
		else {
			do {
				cout << "Re-Enter to day: "; cin >> day;
			} while (day > 30 || day < 1);
		}
	}
	else
	{
		do
		{
			cout << "Enter to month: "; cin >> month;
		} while (month < 1 || month >= 12);
		if (month == 2)
		{
			do {
				cout << "Enter to day: "; cin >> day;
			} while (day > 28 || day < 1);
		}
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			do {
				cout << "Enter to day: "; cin >> day;
			} while (day > 31 || day < 1);
		}
		else {
			do {
				cout << "Re-Enter to day: "; cin >> day;
			} while (day > 30 || day < 1);
		}
	}

}
bool operator > (DATE a, DATE b)
{
	if (a.year > b.year)	return true;
	else if (a.year == b.year) {
		if (a.month > b.month)	return true;
		else if (a.month == b.month) {
			if (a.day > b.day)		return true;
			else	return false;
		}
		else	return false;
	}
	else return false;
}
void DATE::Print_DATE()
{
	cout << "\n\t===DATE==== " << endl << "\t\t\t" << day << "-" << month << "-" << year << endl;
}
void DATE::Permutation()
{
	DATE a, b, tam;
	tam = a;
	a = b;
	b = tam;
}
int main()
{
	DATE date[MaxDate];
	int n;
	cout << "Enter to amount date: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nEnter to date: " << i + 1 << " ";
		date[i].Input();
		date[i].Print_DATE();
		if ((date[i] > date[i + 1]) == true)
			date[i].Permutation();
	}
	cout << "\n\n\t\tSORT UP ASCENDING...\n";
	for (int i = 0; i < n; i++)
	{
		date[i].Print_DATE();
		cout << endl;
	}
	system("pause");
	return 0;
}