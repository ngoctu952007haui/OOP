#include<iostream>
using namespace std;

class Date
{
	private:
		int D, M, Y;
public:
	void nhap();
	void xuat();
};

class NhanSu
{
	int maNhanSu;	
	string hoTen;
	Date namSinh;
public:
	void nhap();
	void xuat();
};

void Date :: nhap()
{
	cout<<"DAY: ";
	cin>>D;
	cout<<"MONTH: ";
	cin>>M;
	cout<<"YEAR: ";
	cin>>Y;
}

void Date :: xuat()
{
	cout<<D<<endl;
	cout<<M<<endl;
	cout<<Y<<endl;
}

void NhanSu :: nhap()
{
	cout<<"MA NHAN SU: ";
	cin>>maNhanSu;
	cin.ignore();
	cout<<"HO TEN: ";
	getline(cin, hoTen);
	namSinh.nhap();

}

void NhanSu :: xuat()
{
	cout<<"------------------"<<endl;
	cout<<maNhanSu<<endl;
	cout<<hoTen<<endl;
	namSinh.xuat();
}

int main()
{
	NhanSu x;
	x.nhap();
	x.xuat();
}
