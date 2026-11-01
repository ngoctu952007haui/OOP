#include<iostream>
#include<iomanip>
using namespace std;

class NhaCungCap
{
	string maNCC;
	string tenNCC;
	string dcNCC;
	
public:
	void Nhap();
	void Xuat();
};

class HangHoa
{
	string tenHang;
	float donGia;
	int soLuong;
	float thanhTien;
	
public:
	void Nhap();
	void Xuat();
	float CongThanhTien();
	friend class Phieu;
};

class Phieu
{
	string maPhieu;
	string tenPhieu;
	string ngayLap;
	NhaCungCap x;
	HangHoa *y;
	int n;
	
public:
	void Nhap();
	void Xuat();
};

void NhaCungCap :: Nhap()
{
	cout<<"MA NHA CUNG CAP: ";
	getline(cin,maNCC);
	cout<<"TEN NHA CUNG CAP: ";
	getline(cin,tenNCC);
	cout<<"DIA CHI: ";
	getline(cin,dcNCC);
	
}

void NhaCungCap :: Xuat()
{
	cout<<"Ma NCC: "<<maNCC;
	cout<<setw(20)<<"Ten NCC: "<<tenNCC<<endl;
	cout<<"Dia chi: "<<dcNCC<<endl;
}

void HangHoa :: Nhap()
{
	cin.ignore();
	cout<<"TEN HANG: ";
	getline(cin,tenHang);
	cout<<"DON GIA: ";
	cin>>donGia;
	cin.ignore();
	cout<<"SO LUONG: ";
	cin>>soLuong;
	
}

void HangHoa :: Xuat()
{
	cout<<tenHang<<setw(20)<<donGia<<setw(20)<<soLuong<<setw(20)<<donGia * soLuong<<endl;
}

float HangHoa :: CongThanhTien()
{
	return donGia * soLuong;
}

void Phieu :: Nhap()
{
	cout<<"MA PHIEU: ";
	getline(cin,maPhieu);
	cout<<"NGAY LAP: ";
	getline(cin,ngayLap);

	x.Nhap();
	
	do{
		cout<<"Nhap so luong hang hoa: ";
		cin>>n;
	}while(n<=0);
	
	y = new HangHoa[n];
	
	for(int i=0; i<n; i++){
		y[i].Nhap();
	}
	
	
}

void Phieu :: Xuat()
{
	cout<<setw(20)<<"Phieu Mua Hang"<<endl;
	cout<<"Ma Phieu: "<<maPhieu;
	cout<<setw(20)<<"Ngay Lap: "<<ngayLap<<endl;
	
	x.Xuat();
	
	cout<<"Ten hang "<<setw(20)<<"Don gia "<<setw(20)<<"So luong "<<setw(20)<<"Thanh tien "<<endl;
	for(int i=0; i<n; i++){
		y[i].Xuat();
	}
	
	float T = 0;
	
	for(int i=0; i<n; i++){
		T = T + (y[i].donGia * y[i].soLuong);
	}
	
	cout<<"Cong Thanh Tien: "<<T;
}

int main()
{
	Phieu p;
	p.Nhap();
	p.Xuat();
	
	return 0;
}
