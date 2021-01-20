#include<iostream>
using namespace std;
struct node {
	int data;
	node *pleft;
	node* pright;
};
typedef struct node* TREE;

void khoi_tao_cay(TREE &t)
{
	t = NULL;
}
void them_node(TREE& t, int x)
{
	if (t == NULL)
	{
		node* temp = new node;
		temp->data = x;
		temp->pleft = NULL;
		temp->pright = NULL;
		t = temp;
	}
	else
	{
		if (t->data < x)
		{
			them_node(t->pright, x);
		}
		else if (t->data > x)
		{
			them_node(t->pleft, x);
		}
	}
}

void input(TREE &t)
{
	int chon = 0;
	do {
		int x;
		khoi_tao_cay(t);
		cout << "Nhap x: ";
		cin >> x;

		them_node(t, x);
		cout << "Ban muon chon tiep hay k ";
		cin >> chon;
	} while (chon);
}
void duyet_NLR(TREE t)
{
	if (t != NULL)
	{
		cout << t->data;
		duyet_NLR(t->pleft);
		duyet_NLR(t->pright);
	}
}
int tinh_tong(TREE t)
{
	if (t != NULL)
	{
		int a = tinh_tong(t->pleft);
		int b = tinh_tong(t->pright);
		return t->data + a + b;
	}
	return 0;
}

int tong(TREE t)
{
	if (t != NULL)
	{
		int a = tong(t->pleft);
		int b = tong(t->pright);
		return t->data + a + b;
	}
	return 0;
}
int sum_nutla(TREE t)
{
	if (t != NULL)
	{
		int a = sum_nutla(t->pleft);
		int b = sum_nutla(t->pright);
		if (t->pleft == NULL && t->pright == NULL)
		{
			
			return t->data + a + b;
		}
		return a + b;
	}
	return 0;
}
int nut_TG(TREE t)
{
	if (t != NULL)
	{
		int a = sum_nutla(t->pleft);
		int b = sum_nutla(t->pright);
		if (t->pleft == NULL || t->pright == NULL)
		{
			return t->data + a + b;
		}
		return a + b;
	}
	return 0;
}
int main()
{
	TREE t;
	
	input(t);
	cout << "Duyet cay NLR: " << endl;
	duyet_NLR(t);
	system("pause");

	return 0;
}