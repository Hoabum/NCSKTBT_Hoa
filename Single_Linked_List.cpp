#include<iostream>
#include<string>
using namespace std;

class Sinhvien
{
private:
	string hoten;
	int msv;
public:
	Sinhvien(); 
	Sinhvien(const Sinhvien&);
	~Sinhvien();
	friend ostream& operator<<(ostream&, Sinhvien&);
	friend istream& operator>>(istream&, Sinhvien&);
};
struct Node {
	Sinhvien data;
	Node* next;
};
class list {
private:
	Node* head;
public:
	list();
	~list();
	void inds();
	Node* them(Sinhvien);
	void chendau(Sinhvien);
	void chencuoi(Sinhvien);
	void chengiua(Sinhvien, int);
	void xoa(int);
};
Sinhvien::Sinhvien()
{
	hoten = "";
	msv = 0;
}
Sinhvien::Sinhvien(const Sinhvien& x)
{
	hoten = x.hoten;
	msv = x.msv;
}
Sinhvien::~Sinhvien()
{

}
istream& operator>>(istream& is, Sinhvien& x)
{
	cout << "Nhap ten : ";
	getline(is, x.hoten);
	cout << "Nhap msv: ";
	is >> x.msv;
	is.ignore(1);
	return is;
}
ostream& operator<<(ostream& os, Sinhvien& x)
{
	os << "ten: " << x.hoten << endl;
	os << "MSV: " << x.msv << endl;
	return os;
}
list::list() {
	head = NULL;
}
list::~list()
{

}
Node* list::them(Sinhvien x)
{
	Node* temp = new Node;
	temp->data = x;
	temp->next = NULL;
	return temp;
}

void list::chendau(Sinhvien x)
{
	Node* temp = them(x); 
	if (head == NULL)
	{
		head = temp;
	}
	else
	{
		temp->next = head;
		head = temp;
	}
}
void list::chencuoi(Sinhvien x)
{
	Node* temp = them(x);
	Node* t = new Node;
	t = head;    
	if (head == NULL)
	{
		temp = head;
	}
	else
	{
		while (t->next != NULL)
		{
			t = t->next;
		}
		temp->next = t->next;
		t->next = temp;
	}
}
void list::chengiua(Sinhvien x, int index)
{
	Node* temp = them(x);
	int vt = 0;
	Node* t = head;
	if ((index == 0) || (head == NULL) || (head->next == NULL))// next =null chen vao dau
	{
		chendau(x);
	}
	else
	{// tim vi tri chen
		while ((vt != index) || (t->next->next != NULL))
		{
			t = t->next;
			vt++;
		}
		if (vt != index) //nếu duyệt hết danh sách lk rồi mà vẫn chưa đến vị trí cần chèn, ta sẽ mặc định chèn cuối
		{
			chencuoi(x);
		}
		else// tim thay vi tri chen thi temp=t
		{
			temp->next = t->next;
			t->next = temp;
		}
	}
}
void list::xoa(int index)
{
	int vt = 0;
	Node* t = head;
	if ((index == 0) || (head == NULL) || (head->next == NULL))
	{
		head = NULL;
	}
	else
	{
		while (index != vt || t->next->next != NULL)
		{
			t = t->next;
			vt++;
		}
		if (vt != index)
		{
			t->next = NULL;
		}
		else
		{
			t->next = t->next->next;
		}
	}
}
void list::inds()
{
	Node* temp;
	for (temp = head;temp != NULL;temp = temp->next)
	{
		cout << temp->data;
		cout << endl;
	}
}
int main()
{
	Sinhvien x, y, z,t;
	list L;
	cin >> x >> y >> z>>t;

	L.chendau(x);
	//L.chengiua(y,2);
	L.chencuoi(t);
	L.chencuoi(z);

	/*L.xoa(2);*/
	L.inds();
	return 0;
}