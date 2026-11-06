#include<iostream>
using namespace std;

class Ban
{
	string maBan;
	string tenBan;
	string ngayThanhLap;
	
public:
	friend class TruongDH;
};

class Khoa
{
	string maKhoa;
	string tenKhoa;
	string truongKhoa;
	
public:
	friend class TruongDH;
};

class Truong
{
	protected:
		string maTruong;
		string tenTruong;
		string diaChi;
	
public:
	void Nhap();
	void Xuat();
};

class TruongDH : public Truong
{
	Khoa *x;
	int n;
	Ban *y;
	int m;
	
public:
	void Nhap();
	void Xuat();
	void setMaKhoa(TruongDH *x ,int n);
	~TruongDH(){
		delete[] x;
		delete[] y;
	}
};

void Truong :: Nhap()
{
	cout<<"MA TRUONG: ";
	getline(cin, maTruong);
	cout<<"TEN TRUONG: ";
	getline(cin, tenTruong);
	cout<<"DIA CHI: ";
	getline(cin, diaChi);
}

void Truong :: Xuat()
{
	cout<<maTruong<<endl;
	cout<<tenTruong<<endl;
	cout<<diaChi<<endl;
}

void TruongDH :: Nhap()
{
	Truong :: Nhap();
	
	do{
		cout<<"Nhap so luong Khoa: ";
		cin>>n;
		cin.ignore();
		cout<<"Nhap so luong Ban: ";		
		cin>>m;
		cin.ignore();
	}while(n<=0);
	
	x = new Khoa[n];
	y = new Ban[m];
	
	for(int i=0; i<n; i++){
		cout<<"Khoa "<<i + 1<<endl;
		cout<<"MA KHOA: ";
		getline(cin, x[i].maKhoa);
		cout<<"TEN KHOA: ";
		getline(cin, x[i].tenKhoa);
		cout<<"TRUONG KHOA: ";
		getline(cin, x[i].truongKhoa);
	}
	
	for(int i=0; i<m; i++){
		cout<<"Ban "<<i + 1<<endl;
		cout<<"MA BAN: ";
		getline(cin, y[i].maBan);
		cout<<"TEN BAN: ";
		getline(cin, y[i].tenBan);
		cout<<"NGAY THANH LAP: ";
		getline(cin, y[i].ngayThanhLap);
	}
}

void setMaKhoa(TruongDH *x, int n)
{
		for(int i=0; i<n; i++){
			if(x[i].maKhoa = "KH01")
			{
				x[i].maKhoa = " ";
			}
		}
	}
}

void TruongDH :: Xuat()
{
	Truong :: Xuat();
	for(int i=0; i<n; i++){
		cout<<"Khoa "<<i + 1<<endl;
		cout<<x[i].maKhoa<<endl;
		cout<<x[i].tenKhoa<<endl;
		cout<<x[i].truongKhoa<<endl;
	}
	
	for(int i=0; i<m; i++){
		cout<<"Ban "<<i + 1<<endl;
		cout<<y[i].maBan<<endl;
		cout<<y[i].tenBan<<endl;
		cout<<y[i].ngayThanhLap<<endl;
	}
}

int main()
{
	TruongDH CongNghiep;
	CongNghiep.Nhap();
	CongNghiep.Xuat();
	
	setMaKhoa(n);
	
	cout<<"IN LAI THONG TIN: "<<endl;
	CongNghiep.Xuat();
	return 0;
}
