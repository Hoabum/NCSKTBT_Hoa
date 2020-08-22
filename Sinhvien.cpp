#include<iostream>
using namespace std;
class Sinhvien
{
private:
    string hoten;
    string msv;
    int tuoi;
    float diem;
public:
    void nhap()
    {
        cout<<"\n\tNhap thong tin "<< endl;
        fflush(stdin);
        cout<<"\nNhap msv: ";
        getline(cin,msv);
        cout<<"\nNhap ho va ten:  ";
        getline(cin,hoten);
        cout<<"\nNhap tuoi: ";
        cin>>tuoi;
        cout<<"\nNhap diem: ";
        cin>>diem;
    }
    void xuat()
    {
        cout<<"\n----------------------\n";
        cout<<"\nmsv: "<< msv << endl;
        cout<<"\nten: "<< hoten <<endl;
        cout<<"\ntuoi: "<< tuoi <<endl;
        cout<<"\ndiem: "<< diem << endl;
    }
};

int main()
{
    Sinhvien a,b;
    a.nhap();
    a.xuat();
    b.nhap();
    b.xuat();
    return 0;
}