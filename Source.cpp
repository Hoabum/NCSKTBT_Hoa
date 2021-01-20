#include<iostream>
using namespace std;

// đề bài: Nhập vào cây nhị phân các số nguyên. Xuất ra màn hình các phần tử của cây nhị phân
// khai báo cấu trúc  1 cái node
struct node
{
	int data; // dữ liệu của node ==> dữ liệu mà node sẽ lưu trữ
	struct node* pLeft; // node liên kết bên trái của cây <=> cây con trái
	struct node* pRight; // node liên kết bên phải của cây <=> cây con phải
};
typedef struct node NODE;
typedef NODE* TREE;

// khởi tạo cây
void KhoiTaoCay(TREE& t)
{
	t = NULL; // cây rỗng
}

// hàm thêm phần tử x vào cây nhị phân
void ThemNodeVaoCay(TREE& t, int x)
{
	// nếu cây rỗng
	if (t == NULL)
	{
		NODE* p = new NODE; // khởi tạo 1 cái node để thêm vào cây
		p->data = x;// thêm dữ liệu x vào data
		p->pLeft = NULL;
		p->pRight = NULL;
		t = p;// node p chính là node gốc <=> x chính là node gốc
	}
	else // cây có tồn tại phần tử
	{
		// nếu phần tử thêm vào mà nhỏ hơn node gốc ==> thêm nó vào bên trái
		if (t->data > x)
		{
			ThemNodeVaoCay(t->pLeft, x); // duyệt qua trái để thêm phần tử x
		}
		else if (t->data < x) // nếu phần tử thêm vào mà lớn hơn node gốc ==> thêm nó vào bên phải
		{
			ThemNodeVaoCay(t->pRight, x); // duyệt qua phải để thêm phần tử x
		}
	}
}

// hàm xuất cây nhị phân theo NLR
void Duyet_NLR(TREE t) // tien tu
{
	// nếu cây còn phần tử thì tiếp tục duyệt
	if (t != NULL)
	{
		cout << t->data << " "; // xuất dữ liệu trong node
		Duyet_NLR(t->pLeft); // duyệt qua trái
		Duyet_NLR(t->pRight); // duyệt qua phải
	}
}
void Duyet_LRN(TREE t)//hau tu
{
	if (t != NULL)
	{
		Duyet_LRN(t->pLeft);
		Duyet_LRN(t->pRight);
		cout << t->data;
	}
}
// hàm nhập dữ liệu
void Menu(TREE& t)
{
	while (true)
	{
		system("cls");
		cout << "\n\n\t\t =========== MENU ===========";
		cout << "\n1. Nhap du lieu";
		cout << "\n2. Xuat du lieu cay NLR";
		cout << "\n0. Ket thuc";
		cout << "\n\n\t\t ============================";

		int luachon;

		cout << "\nNhap lua chon: ";
		cin >> luachon;
		if (luachon < 0 || luachon > 2)
		{
			cout << "\nLua chon khong hop le";
			system("pause");
		}
		else if (luachon == 1)
		{
			int x;
			cout << "\nNhap so nguyen x: ";
			cin >> x;
			ThemNodeVaoCay(t, x);
		}
		else if (luachon == 2)
		{
			cout << "\n\t\t DUYET CAY THEO NLR\n";
			Duyet_NLR(t);
			system("pause");
		}
		else
		{
			break;
		}
	}

}

int main()
{
	TREE t;
	KhoiTaoCay(t);
	Menu(t);

	system("pause");
	return 0;
}