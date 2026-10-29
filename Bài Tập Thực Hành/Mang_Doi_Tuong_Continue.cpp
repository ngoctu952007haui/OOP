#include<iostream>
using namespace std;

class Sach
{
	int maSach;
	string tenSach;
	string nhaXB;
	int soTrang;
	float giaTien;

public:
	void Nhap();
	void Xuat();
};

void Sach :: Nhap()
{
	cout<<"MA SACH: ";
	cin>>maSach;
	cin.ignore();
	cout<<"TEN SACH: ";
	getline(cin,tenSach);
	cout<<"NHA XUAT BAN: ";
	getline(cin,nhaXB);
	cout<<"SO TRANG: ";
	cin>>soTrang;
	cout<<"GIA TIEN: ";
	cin>>giaTien;
}

void Sach :: Xuat()
{
	cout<<"----------------"<<endl;
	cout<<maSach<<" "<<tenSach<<" "<<nhaXB<<" "<<soTrang<<" "<<giaTien<<endl;
}

int main()
{
	Sach *p;
	int n;
	
	do{
		cout<<"Nhap so luong sach: ";
		cin>>n;
	}while(n<=0);
	
	p = new Sach[n];
	
	for(int i=0; i<n; i++)
	{
		p[i].Nhap();
	}
	
	for(int i=0; i<n; i++)
	{
		p[i].Xuat();
	}
	
	return 0;
}
