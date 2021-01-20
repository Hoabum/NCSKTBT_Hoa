#include<iostream>
#include<string>
using namespace std;
class NhanVien {
private:
	string HoTen;
	int Luong;
public:
	NhanVien();
	NhanVien(string, string, int);
	NhanVien(const NhanVien&);
	~NhanVien();
	friend ostream& operator<<(ostream&, NhanVien&);
	friend istream& operator>>(istream&, NhanVien&);
};
struct Node {
	NhanVien data;
	Node* next;
};
class LinkedList {
private:
	Node* head;
public:
	LinkedList();
	~LinkedList();
	void inds();
	Node* them(NhanVien);
	void chendau(NhanVien);
	void chencuoi(NhanVien);
	void chengiua(NhanVien, int);
	void xoa(int);
};
NhanVien::NhanVien() {
	HoTen = "";
	Luong = 0;
}
NhanVien::NhanVien(const NhanVien& x) {
	HoTen = x.HoTen;
	Luong = x.Luong;
}
NhanVien::~NhanVien() {}
istream& operator>>(istream& is, NhanVien& x) {
	cout << "Nhap ten: ";
	getline(is, x.HoTen);
	cout << "Nhap luong: ";
	is >> x.Luong;
	is.ignore(1);
	return is;
}
ostream& operator<<(ostream& os, NhanVien& x) {
	os << "Ten: " << x.HoTen << endl;
	os << "Luong: " << x.Luong << endl;
	return os;
}
LinkedList::LinkedList() {
	head = NULL;
}
LinkedList::~LinkedList() {}

Node* LinkedList::them(NhanVien x) {
	Node* temp = new Node;
	temp->data = x;
	temp->next = NULL;
	return temp;
}
void LinkedList::chendau(NhanVien x) {
	Node* temp = them(x);
	if (head == NULL) {
		head = temp;
	}
	else {
		temp->next = head;
		head = temp;
	}
}
void LinkedList::chencuoi(NhanVien x) {
	Node* temp = them(x);
	Node* t = new Node;
	t = head;
	if (head == NULL) {
		temp = head;
	}
	else {
		while (t->next != NULL) {
			t = t->next;
		}
		temp->next = t->next;
		t->next = temp;
	}
}
void LinkedList::chengiua(NhanVien x, int index) {
	Node* temp = them(x);
	int vt = 0;
	Node* t = head;
	if ((index == 0) || (head == NULL) || (head->next == NULL)) {
		chendau(x);
	}
	else {
		while ((vt != index) || (t->next->next != NULL)) {
			t = t->next;
			vt++;
		}
		if (vt != index) {
			chencuoi(x);
		}
		else {
			temp->next = t->next;
			t->next = temp;
		}
	}
}
void LinkedList::xoa(int index) {
	int vt = 0;
	Node* t = head;
	if ((index == 0) || (head == NULL) || (head->next == NULL)) {
		head = NULL;
	}
	else {
		while (index != vt || t->next->next != NULL) {
			t = t->next;
			vt++;
		}
		if (vt != index) {
			t->next = NULL;
		}
		else {
			t->next = t->next->next;
		}
	}

}
void LinkedList::inds() {
	Node* temp;
	for (temp = head; temp != NULL; temp = temp->next) {
		cout << temp->data;
		cout << endl;
	}
}
int main() {
	NhanVien x, y, z, t;
	LinkedList list;
	cin >> x >> y >> z >> t;
	list.chendau(x);
	list.chengiua(y, 2);
	list.chencuoi(z);
	list.chencuoi(t);
	//	list.inds();
	list.xoa(2);
	list.inds();
	return 0;
}