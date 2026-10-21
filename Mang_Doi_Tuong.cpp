#include<iostream>
using namespace std;

class Hang
{
	int maHang;
	string tenHang;
	float donGia;
	int soLuong;
	
public:
	void Nhap();
	void Xuat();
	float ThanhTien();
};

void Hang :: Nhap()
{
	cout<<"MA HANG: ";
	cin>>maHang;
	cin.ignore();
	cout<<"TEN HANG: ";
	getline(cin,tenHang);
	cout<<"DON GIA: ";
	cin>>donGia;
	cout<<"SO LUONG: ";
	cin>>soLuong;
}

float Hang :: ThanhTien()
{
	return donGia * soLuong;
}

void Hang :: Xuat()
{
	cout<<"----------------"<<endl;
	cout<<maHang<<" "<<tenHang<<" "<<donGia<<" "<<soLuong<<" "<<ThanhTien()<<"VND"<<endl;
	
}

int main()
{
	Hang *p;
	int n;
	
	do{
		cout<<"Nhap n = ";
		cin>>n;
	}while(n<=0);
	
	p = new Hang[n];
	
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
