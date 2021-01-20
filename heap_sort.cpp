#include <iostream>
#include <conio.h>
 
void Swap(int& a, int& b)
{
  int temp = a;
  a = b;
  b = temp;
}
 
 
void ImplHeapify(int arr[], int n, int i)
{
  int root = i;
  int l = 2*i + 1;  // left position = 2*i + 1
  int r = 2*i + 2;  // right position = 2*i + 2
 
  // If left child is larger than root
  if (l < n && arr[l] > arr[root])
    root = l;
 
  // If right child is larger than largest so far
  if (r < n && arr[r] > arr[root])
    root = r;
 
  // If root position is not largest value
  if (root != i)
  {
    Swap(arr[i], arr[root]);
    ImplHeapify(arr, n, root);
  }
}
 
void ImplHeapSort(int arr[], int n)
{
  for (int i = (n/2) - 1; i >= 0; i--)
    ImplHeapify(arr, n, i);
 
  for (int i = n-1; i >= 0; i--)
  {
    Swap(arr[0], arr[i]);
    ImplHeapify(arr, i, 0);
  }
}
 
void Show(int arr[], int n)
{
  for (int i = 0; i < n; ++i)
    std::cout << arr[i] << " ";
}
 
int main()
{
  int arr[] = {12, 11, 13, 5, 6, 7};
  int n = sizeof(arr)/sizeof(arr[0]);
 
  ImplHeapSort(arr, n);
 
  std::cout << "Sorted List is \n";
  Show(arr, n);
 
  _getch();
}