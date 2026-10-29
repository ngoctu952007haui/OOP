#include<iostream>
using namespace std;

class Hang
{
	int Mahang;
	string Tenhang;
	float Dongia;
public:
	void nhap();
	void xuat();
};

class Phieu
{
	int Maphieu;
	Hang x[100];
	int n;
public:
	void nhap();
	void xuat();
};

void Phieu :: nhap()
{
	cout<<"MA PHIEU: ";
	cin>>Maphieu;
	
	do{
		cout<<"So luong mat hang: ";
		cin>>n;
	}while(n<=0);
	
	for(int i=0; i<n; i++){
		cout<<"MAT HANG THU " << i+1 <<endl;
		x[i].nhap();
	}
	
}

void Phieu :: xuat()
{
	cout<<Maphieu<<endl;
	for(int i=0; i<n; i++){
		x[i].xuat();
	}
}

void Hang :: nhap()
{
	cout<<"MA HANG: ";
	cin>>Mahang;
	cin.ignore();
	cout<<"TEN HANG: ";
	getline(cin, Tenhang);
	cout<<"DON GIA: ";
	cin>>Dongia;
}

void Hang :: xuat()
{
	cout<<Mahang<<endl;
	cout<<Tenhang<<endl;
	cout<<Dongia<<endl;
}

int main()
{
	Phieu a;
	a.nhap();
	a.xuat();
	return 0;
}
