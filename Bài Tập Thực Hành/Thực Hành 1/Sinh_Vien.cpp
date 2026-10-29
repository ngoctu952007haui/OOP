#include<iostream>
using namespace std;

class SinhVien
{
	int maSV;
	string hoTen;
	int tuoi;
	float diemTB;
	
public:
	void nhap();
	void xuat();
};

void SinhVien :: nhap()
{
	cout<<"MA SV: ";
	cin>>maSV;
	cin.ignore();
	cout<<"HO TEN: ";
	getline(cin,hoTen);
	cout<<"TUOI: ";
	cin>>tuoi;
	cout<<"DIEM TRUNG BINH: ";
	cin>>diemTB;
}

void SinhVien :: xuat()
{
	cout<<"-----------------"<<endl;
	cout<<maSV<<endl;
	cout<<hoTen<<endl;
	cout<<tuoi<<endl;
	cout<<diemTB<<endl;
}

int main()
{
	SinhVien a;
	a.nhap();
	
	SinhVien b;
	b.nhap();
	
	a.xuat();
	b.xuat();
	
	return 0;
}
