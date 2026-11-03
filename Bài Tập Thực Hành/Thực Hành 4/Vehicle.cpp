#include<iostream>

using namespace std;

class Vehicle
{
	protected:
		int namSX;
		string nhanHieu;
		string hang;
public:
	void Nhap();
	void Xuat();

};

class Oto : public Vehicle
{
	int soChoNgoi;
	float dungTich;

public:
	void Nhap();
	void Xuat();
	void setDungTich(int DT){
		dungTich = DT;
	}
};

class Moto : public Vehicle
{
	int phanKhoi;
	
public:
	void Nhap();
	void Xuat();
};

void Oto :: Nhap()
{
	cout<<"SO CHO NGOI: ";
	cin>>soChoNgoi;
	cout<<"DUNG TICH: ";
	cin>>dungTich;
	Vehicle :: Nhap();
}

void Oto :: Xuat()
{
	cout<<
	cout<<soChoNgoi<<endl;
	cout<<dungTich<<endl;
	Vehicle :: Xuat();
}

void Moto :: Nhap()
{
	cout<<"PHAN KHOI: ";
	cin>>phanKhoi;
	Vehicle :: Nhap();
}

void Moto :: Xuat()
{
	cout<<"--------------------"<<endl;
	cout<<phanKhoi<<endl;
	Vehicle :: Xuat();//Reuse lai code thi dung toan tu "::" pham vi
}

void Vehicle :: Nhap()
{
	cout<<"NAM SAN XUAT: ";
	cin>>namSX;
	cin.ignore();
	cout<<"NHAN HIEU: ";
	getline(cin,nhanHieu);
	cout<<"HANG: ";
	getline(cin,hang);
}

void Vehicle :: Xuat()
{
	cout<<"--------------"<<endl;
	cout<<namSX<<endl;
	cout<<nhanHieu<<endl;
	cout<<hang<<endl;
}

int main()
{
	Oto Mazda;
	Moto Exciter;
	
	Mazda.Nhap();
	Exciter.Nhap();
	
	Mazda.setDungTich(3.0);
	cout<<"Dung tich xi lanh cua xe Mazda sau khi sua lai thong so: "<<endl;
	Mazda.Xuat();
	
	Exciter.Xuat();
	
	return 0;
}
