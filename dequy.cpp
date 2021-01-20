#include<iostream>
using namespace std;
int sum_(int a[], int n, int i, int sum, int count)
{
	if (i == n)
	{
		if (sum == 0)
		{
			count++;
		}
		return count;
	}
	count = sum_(a, n, i + 1, sum - a[i], count);
	count = sum_(a, n, i + 1, sum, count);
	return count;
}
int main()
{
	int a[] = { 1,2,3,4,5 };
	int sum = 10;
	int n = sizeof(a) / sizeof(a[0]);
	cout << sum_(a, n, 0, sum, 0);
	return 0;
}