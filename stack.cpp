// stack 
#include<iostream>
using namespace std;

int current_size = -1; //nếu currer-size =-1 thì stack rong 
#define max_size 100 
int stack[max_size];
// kiem tra stack rỗng hay không 
bool isEmpty()
{
	return (current_size == -1);
}
// kiem tra stack đầy hay chưa 
bool isFull()
{
	return (current_size == max_size);
}
// them 1 phần tử 

void push(int data)
{
	if (!isFull())
	{
		current_size++;
		stack[current_size] = data;
	}
	else
	{
		cout << "stack full " << endl;
	}
}
int top() /// lay phan tu nhung khong xoa
{
	if (!isEmpty())
	{
		int data = stack[current_size];

		return data;
	}
	else
	{
		cout << " stack is empty " << endl;
	}
}
int pop()// lay phan tu và xóa
{
	if (!isEmpty())
	{
		int data = stack[current_size];
		current_size--;
		return data;
	}
	else
	{
		cout << " stack is empty" << endl;
	}
}

int main()
{
	push(5);
	push(6);
	push(50);
	push(60);
	cout << "top: " << top() << endl;
	cout << "pop: " << pop() << endl;
	cout << "pop= " << pop() << endl;
	while (!isEmpty())
	{
		int data = pop();
		cout << data << "<--";
	}
	cout << endl;
	return 0;
}