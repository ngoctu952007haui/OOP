#include<iostream>
using namespace std;

class NSX
{
	int Manhasx;
	string Tennhasx;
	string Diachinhasx;
public:
	void nhap();
	void xuat();
	 
};

class Hang
{
	int Mahang;
	string Tenhang;
	NSX x;
public:
	void nhap();
	void xuat();
};

void Hang :: nhap()
{
	cout<<"MA HANG: ";
	cin>>Mahang;
	cin.ignore();
	cout<<"TEN HANG: ";
	getline(cin, Tenhang);
	x.nhap();
}

void Hang :: xuat()
{
	cout<<"---------------"<<endl;
	cout<<Mahang<<endl;
	cout<<Tenhang<<endl;
	x.xuat();
}

void NSX :: nhap()
{
	cout<<"MA NHA SAN XUAT: ";
	cin>>Manhasx;
	cin.ignore();
	cout<<"TEN NHA SAN XUAT: ";
	getline(cin, Tennhasx);
	cout<<"DIA CHI NHA SAN XUAT: ";
	getline(cin,Diachinhasx);
}

void NSX :: xuat()
{
	cout<<Manhasx<<endl;
	cout<<Tennhasx<<endl;
	cout<<Diachinhasx<<endl;
}

int main()
{
	Hang a;
	a.nhap();
	a.xuat();
	return 0;
}
