#include<iostream>
using namespace std;

class QuanLy
{
	int Maql;
	string Hoten;
public:
	void nhap();
	void xuat();
};

class May
{
	int Mamay;
	string Kieumay;
	string Tinhtrang;
public:
	void nhap();
	void xuat();
};

class PhongMay
{
	int Maphong;
	string Tenphong;
	float Dientich;
	QuanLy x;
	May *y;
	int n;
public:
	void nhap();
	void xuat();
	
	~PhongMay()
	{
		delete[] y;
	}
};

void PhongMay :: nhap()
{
	cout<<"MA PHONG: ";
	cin>>Maphong;
	cin.ignore();
	cout<<"TEN PHONG: ";
	getline(cin, Tenphong);
	cout<<"DIEN TICH: ";
	cin>>Dientich;
	
	x.nhap();
	
	do{
		cout<<"NHAP SO LUONG MAY: ";
		cin>>n;
	}while(n<=0);
	
	y = new May[n];
	
	for(int i=0; i<n; i++){
		y[i].nhap();
	}
}

void PhongMay :: xuat()
{
	cout<<"---------------"<<endl;
	cout<<Maphong<<endl;
	cout<<Tenphong<<endl;
	cout<<Dientich<<"m2"<<endl;
	for(int i=0; i<n; i++){
		y[i].xuat();
	}
}

void QuanLy :: nhap()
{
	cout<<"MA QUAN LY: ";
	cin>>Maql;
	cin.ignore();
	cout<<"HO TEN: ";
	getline(cin, Hoten);
}

void QuanLy :: xuat()
{
	cout<<Maql<<endl;
	cout<<Hoten<<endl;
}

void May :: nhap()
{
	cout<<"MA MAY: ";
	cin>>Mamay;
	cin.ignore();
	cout<<"KIEU MAY: ";
	getline(cin, Kieumay);
	cout<<"TINH TRANG: ";
	getline(cin, Tinhtrang);
}

void May :: xuat()
{
	cout<<Mamay<<endl;
	cout<<Kieumay<<endl;
	cout<<Tinhtrang<<endl;
}

int main()
{
	PhongMay a;

	a.nhap();
	a.xuat();
	
	return 0;
}

