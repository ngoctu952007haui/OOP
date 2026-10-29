#include<iostream>
using namespace std;

class NSX
{
	int maNSX;
	string tenNSX;
	string dcNSX;
	friend class Hang;
};

class Hang
{
	int maHang;
	string tenHang;
	float donGia;
	float trongLuong;
	NSX x;
	

public: 
	void Nhap();
	void Xuat();
};

void Hang :: Nhap()
{
	cout<<"MA HANG: ";
	cin>>maHang;
	
	cin.ignore();
	cout<<"TEN HANG: ";
	getline(cin, tenHang);
	
	cout<<"DON GIA: ";
	cin>>donGia;
	
	cout<<"TRONG LUONG: ";
	cin>>trongLuong;
	
	cout<<"MA NHA SAN XUAT: ";
	cin>>x.maNSX;
	
	cin.ignore();
	cout<<"TEN NHA SAN XUAT: ";
	getline(cin,x.tenNSX);
	
	cout<<"DIA CHI NHA SAN XUAT: ";
	getline(cin,x.dcNSX);
	
	
}

void Hang :: Xuat()
{
	cout<<maHang<<endl;
	cout<<tenHang<<endl;
	cout<<donGia<<endl;
	cout<<trongLuong<<" g"<<endl;
	cout<<x.maNSX<<endl;
	cout<<x.tenNSX<<endl;
	cout<<x.dcNSX<<endl;
}

int main()
{
	Hang a;
	a.Nhap();
	a.Xuat();
	return 0;
}

