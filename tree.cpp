#include<iostream>
using namespace std;

struct node
{
	int data;
	node* pleft;
	node* pright;
};
typedef struct node* TREE;
void khoi_tao_cay(TREE& t)
{
	t = NULL;
}
void them_node(TREE& t, int x)
{
	if (t == NULL)
	{
		node* temp = new node;
		temp->data = x;
		temp->pleft =NULL;
		temp->pright = NULL;
		t = temp;
	}
	else
	{
		if (t->data > x)
		{
			them_node(t->pleft, x);
		}
		else if (t->data < x)
		{
			them_node(t->pright, x);
		}
	}
}
void duyet_NLR(TREE t)
{
	if (t != NULL)
	{
		cout << t->data << endl;
		duyet_NLR(t->pleft);
		duyet_NLR(t->pright);
	}
}
void menu(TREE t)
{
	
	while (true)
	{
		cout << "1. Nhap cay: ";
		cout << "2.duyet NLR: ";
		int luachon;
		cout << "Nhap lua chon cua ban: ";
		cin >> luachon; 
		if (luachon == 1)
		{
			0
		}
	}
}
int main()
{
	TREE t;
	khoi_tao_cay(t);
	menu();
}