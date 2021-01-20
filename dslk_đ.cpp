#include<iostream>
using namespace std;
	
struct Node {
	int data;
	Node* next;
};
struct list
{
	Node* head;
	Node* tail;
};
void khoi_tao_ds(list& l)
{
	l.head = l.tail = NULL;
}
Node* Khoi_tao_node(int x)
{
	Node* p = new Node;
	if (p == NULL)
	{
		return NULL;
	}
	p->data = x;
	p->next = NULL;
	return p;
}
void them_dau(list& l, Node *p)
{
	if (l.head == NULL)
	{
		l.head = l.tail = p;
	}
	else {
		p->next = l.head;
		l.head = p;
	}
}
void them_cuoi(list& l, Node* p)
{
	if (l.head == NULL)
	{
		l.head = l.tail = p;
	}
	else
	{
		l.tail->next = p;
		l.tail = p;
	}
}
void input(list& l)
{
	int n;
	cout << "ban muon nhap bao nhieu node : ";
	cin >> n;
	khoi_tao_ds(l);
	for (int i = 1;i <= n;i++)
	{
		int x;
		cout << "Nhap data: ";
		cin >> x;
		Node* p = Khoi_tao_node(x);
		them_cuoi(l, p);
	}
}
void ouput(list l)
{
	for (Node* p = l.head;p != NULL;p = p->next)
	{
		cout << "  " << p->data;
	}
}
int main()
{
	list l;
	input(l);
	ouput(l);

	return 0;
}