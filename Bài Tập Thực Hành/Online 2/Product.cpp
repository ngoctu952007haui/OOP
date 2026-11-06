#include<iostream>
using namespace std;

class NSX
{
	string tenNSX;
	string diaChi;
	
public:
	void Nhap();
	void Xuat();
	friend class Hang;
};

class Date
{
	int D,M,Y;
	
public:
	void Nhap();
	void Xuat();
	friend class Tivi;
};

class Hang
{
	protected:
		string tenHang;
		NSX x;
		float donGia;
		
public:
	Hang(){
		tenHang = " ";
		donGia = 0;
		x.tenNSX = " ";
		x.diaChi = " ";
	}
	void Nhap();
	void Xuat();
};

class Tivi : public Hang
{
	float kichThuoc;
	Date ngayNhap;
	
public:
	Tivi(){
		kichThuoc = 0;
		ngayNhap.D = 0;
		ngayNhap.M = 0;
		ngayNhap.Y = 0;
	}
	void Nhap();
	void Xuat();
};

void NSX :: Nhap()
{
	cout<<"TEN NHA SAN XUAT: ";
	getline(cin, tenNSX);
	cout<<"DIA CHI NHA SAN XUAT: ";
	getline(cin, diaChi);
}

void NSX :: Xuat()
{
	cout<<tenNSX<<endl;
	cout<<diaChi<<endl;
}

void Date :: Nhap()
{
	cout<<"NGAY: ";
	cin>>D;
	cout<<"THANG: ";
	cin>>M;
	cout<<"NAM: ";
	cin>>Y;
}

void Date :: Xuat()
{
	cin.ignore();
	cout<<D<<" "<<M<<" "<<Y<<endl;
}

void Hang :: Nhap()
{
	cout<<"TEN HANG: ";
	getline(cin, tenHang);
	x.Nhap();
	cout<<"DON GIA: ";
	cin>>donGia;
}

void Hang :: Xuat()
{
	cout<<tenHang<<endl;
	x.Xuat();
	cout<<donGia<<endl;
}

void Tivi :: Nhap()
{
	Hang :: Nhap();
	cout<<"KICH THUOC: ";
	cin>>kichThuoc;
	ngayNhap.Nhap();
}

void Tivi :: Xuat()
{
	Hang :: Xuat();
	cout<<kichThuoc<<endl;
	ngayNhap.Xuat();
}

int main()
{
	Tivi a;
	a.Nhap();
	a.Xuat();
	return 0;
}
