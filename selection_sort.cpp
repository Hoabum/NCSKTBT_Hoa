#include<iostream>
using namespace std; 

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void seleciton_sort(int a[],int n)
{
	int min_index = 0;
	for (int i = 0;i < n;i++)
	{
		min_index = i;
		for (int j = i + 1; j < n;j++)
		{
			if (a[j] < a[min_index])
			{
				min_index = j;
			}
		}
		swap(&a[i],&a[min_index]);
	}

}
void printArray(int a[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << a[i] << " ";
	cout << endl;
}
int main()
{
	int a[] = { 2,1,6,3,4,5,9,2,10,1 };
	int n = sizeof(a) / sizeof(a[0]);
	seleciton_sort(a, n);
	printArray(a, n);
	return 0;
}
/// 5 2 3 4 7 1 10 
//  1 2 3 4 7 5 10
/// 1 2 3 4 7 5 10