#include<iostream>

using namespace std;

class Printer
{
	protected:
		float trongLuong;
		string hangSX;
		int namSX;
		float tocDo;
public:
	void setNamSX(int nam){
		namSX = nam;
	}
};

class DotPrinter : public Printer
{
	float matDoKim;
	
public:
	void Nhap();
	void Xuat();
};

class LaserPrinter : public Printer
{
	float doPhanGiai;
	
public:
	void Nhap();
	void Xuat();
};

void DotPrinter :: Nhap()
{
	cout<<"Mat do kim: ";
	cin>>matDoKim;
	cout<<"Trong luong: ";
	cin>>trongLuong;
	cin.ignore();
	cout<<"Hang san xuat: ";
	getline(cin,hangSX);
	cout<<"Nam san xuat: ";
	cin>>namSX;
	cout<<"Toc do: ";
	cin>>tocDo;
}

void DotPrinter :: Xuat()
{
	cout<<"------------------"<<endl;
	cout<<matDoKim<<endl;
	cout<<trongLuong<<" kg"<<endl;
	cout<<hangSX<<endl;
	cout<<namSX<<endl;
	cout<<tocDo<<" (so trang/phut)"<<endl;
}

void LaserPrinter :: Nhap()
{
	cout<<"Do phan giai: ";
	cin>>doPhanGiai;
	cout<<"Trong luong: ";
	cin>>trongLuong;
	cin.ignore();
	cout<<"Hang san xuat: ";
	getline(cin,hangSX);
	cout<<"Nam san xuat: ";
	cin>>namSX;
	cout<<"Toc do: ";
	cin>>tocDo;
}

void LaserPrinter :: Xuat()
{
	cout<<"------------------"<<endl;
	cout<<doPhanGiai<<endl;
	cout<<trongLuong<<" kg"<<endl;
	cout<<hangSX<<endl;
	cout<<namSX<<endl;
	cout<<tocDo<<" (so trang/phut)"<<endl;
}

int main()
{
	LaserPrinter L;
	DotPrinter D;
	
	L.Nhap();
	D.Nhap();	
	L.Xuat();
	D.Xuat();
	
	L.setNamSX(2020);
	D.setNamSX(2020);	
	cout<<"Nam san xuat sau khi sua lai la: "<<endl;
	
	L.Xuat();
	cout<<"May Laser"<<endl;
	
	D.Xuat();
	cout<<"May In kim"<<endl;
	return 0;
}

