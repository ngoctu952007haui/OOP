#include<iostream>
using namespace std;

class Date
{
	int D,M,Y;
	
	friend class Hang;
};

class Hang
{
	int maHang;
	string tenHang;
	Date ngaySX;
	
public:
	void Nhap();
	void Xuat();
	int getNam();
};



void Hang :: Nhap()
{
	cout<<"MA HANG: ";
	cin>>maHang;
	cin.ignore();
	cout<<"TEN HANG: ";
	getline(cin,tenHang);
	
	cout<<"NGAY SAN XUAT: ";
	cin>>ngaySX.D;
	
	cout<<"THANG SAN XUAT: ";
	cin>>ngaySX.M;
	
	cout<<"NAM SAN XUAT: ";
	cin>>ngaySX.Y;
}

void Hang :: Xuat()
{
	cout<<maHang<<endl;
	cout<<tenHang<<endl;
	cout<<ngaySX.D<<endl;
	cout<<ngaySX.M<<endl;
	cout<<ngaySX.Y<<endl;
}

int Hang :: getNam()
{
	return ngaySX.Y;
}

int main()
{
	Hang *p;
	int n;
	do{
		cout<<"Nhap so luong hang: ";
		cin>>n;
	}while(n<=0);
	
	p = new Hang[n];
	
	for(int i=0; i<n; i++){
		p[i].Nhap();
	}
	
	for(int i=0; i<n; i++){
		if(p[i].getNam() == 2017){
			p[i].Xuat();
		}
	}
	
	delete[] p;
	return 0;
}
