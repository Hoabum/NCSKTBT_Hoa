#include<iostream>
#include<vector>
using namespace std;

class Vector
{
private:
	int n;
	int* v;
public:
	Vector(int n);
	~Vector();
	Vector(int a[], int n);
	void setN(int );
	void setV(int *);
	int getN();
	int* getV() {
		return v;
	}
	void input();
	void ouput();
	void operator=(Vector A);

};
Vector::Vector(int n)
{
	this->n = 0;
	v = new int[this->n];
}
Vector::Vector(int a[], int n)// vector(a[5],6)
{
	this->n = n;
	v = new int[this->n];
	int* temp = v;// 
	for (int i = 0;i < n;i++)
	{
		*temp = a[i];
		temp++;
	}
}
Vector::~Vector()
{

}
void Vector::setN(int n)
{
	this->n = n;
}
void Vector::setV(int* v)
{
	this->v = v;
}
int Vector::getN()
{
	return this->n;
}

void Vector::input()
{
	int size;
	cout << " Nhap size: ";
	cin >> size; // soluong
	v = new int[size];
	this->n = size;
	int* temp = v;
	for (int i = 0;i < size;i++)
	{
		cout << "a[" << i << "]= ";
		cin >> *temp;
		temp++;
	}
}
void Vector::ouput()
{
	int* temp = v;
	for (int i = 0;i < this->n;i++)
	{
		cout << *temp<<"\n";
		temp++;
	}
	cout << "\n";
}
void Vector::operator=(Vector A)
{
	int* temp = v;
	this->n = A.getN();
	this->v = A.getV();
	delete[]temp;
}
int main()
{
	/*Vector A(5);*/
	/*A.input();
	A.ouput();
	Vector B(6);*/
	int a[5] = { 1,2,3,4,5 };
	Vector A(a, 5);
	//A.print_Vector();
	Vector B(5);
	B = A;
	B.ouput();
	return 0;
}