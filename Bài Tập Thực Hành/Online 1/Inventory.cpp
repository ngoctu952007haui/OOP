#include<iostream>
#include<iomanip>
using namespace std;

class NguoiKiemKe
{
	string nvKiemKe;
	string chucVu;
	string kiemKeTaiPhong;
	string maPhong;
	string truongPhong;
	
public:
	void Nhap();
	void Xuat();
};

class HangHoa
{
	string tenTS;
	int soLuong;
	string tinhTrang;
	
public:
	void Nhap();
	void Xuat();
	friend class Phieu;
};

class Phieu
{
	string maPhieu;
	string ngayKiemKe;
	NguoiKiemKe x;
	HangHoa *y;
	int n;
	
public:
	void Nhap();
	void Xuat();	
};

void NguoiKiemKe :: Nhap()
{
	cout<<"NHAN VIEN KIEM KE: ";
	getline(cin,nvKiemKe);
	cout<<"CHUC VU: ";
	getline(cin,chucVu);
	cout<<"KIEM KE TAI PHONG: ";
	getline(cin,kiemKeTaiPhong);
	cout<<"MA PHONG: ";
	getline(cin,maPhong);
	cout<<"TRUONG PHONG: ";
	getline(cin,truongPhong);
	
}

void NguoiKiemKe :: Xuat()
{
	cout<<"Nhan vien kiem ke: "<<setw(5)<<nvKiemKe<<setw(25);
	cout<<"Chuc vu: "<<setw(5)<<chucVu<<endl;
	cout<<"Kiem ke tai phong: "<<setw(5)<<kiemKeTaiPhong<<setw(25);
	cout<<"Ma phong: "<<setw(5)<<maPhong<<endl;
	cout<<"Truong phong: "<<truongPhong<<endl;
}

void HangHoa :: Nhap()
{
	cout<<"TEN TS: ";
	getline(cin,tenTS);
	cout<<"SO LUONG: ";
	cin>>soLuong;
	cin.ignore();
	cout<<"TINH TRANG: ";
	getline(cin,tinhTrang);
}

void HangHoa :: Xuat()
{
	cout<<tenTS<<setw(25)<<soLuong<<setw(25)<<tinhTrang<<endl;
}

void Phieu :: Nhap()
{
	cout<<"MA PHIEU: ";
	getline(cin,maPhieu);
	cout<<"NGAY KIEM KE: ";
	getline(cin,ngayKiemKe);
	
	x.Nhap();
	
	do{
		cout<<"NHAP SO LUONG HANG HOA: ";
		cin>>n;
		cin.ignore();
	}while(n<=0);
	
	y = new HangHoa[n];
	
	for(int i=0; i<n; i++){
		y[i].Nhap();
	}
}

void Phieu :: Xuat()
{
	cout<<setw(30)<<"PHIEU KIEM KE TAI SAN"<<endl;
	
	cout<<"Ma phieu: "<<setw(5)<<maPhieu<<setw(25);
	cout<<"Ngay lap: "<<setw(5)<<ngayKiemKe<<endl;
	
	x.Xuat();
	
	cout<<"Ten tai san"<<setw(25)<<"So luong"<<setw(25)<<"Tinh trang"<<endl;
	for(int i=0; i<n; i++){
		y[i].Xuat();
	}
	
	cout<<"So tai san da kiem ke la: "<<n<<setw(25);
	
	int T = 0;
	for(int i=0; i<n; i++){
		T = T + y[i].soLuong;
	}
	
	cout<<"Tong so luong la: "<<T<<endl;
}

int main()
{
	Phieu A;
	A.Nhap();
	A.Xuat();
	
	return 0;
}

