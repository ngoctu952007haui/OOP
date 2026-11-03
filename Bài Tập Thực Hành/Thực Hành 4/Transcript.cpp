#include<iostream>
#include<iomanip>

using namespace std;

class MonHoc
{
	string tenMon;
	int soTrinh;
	float diem;

public:
	void Nhap();
	void Xuat();
	friend class SinhVien;
};

class SinhVien
{
	string maSV;
	string tenSV;
	string lop;
	int khoa;
	MonHoc *x;
	int n;

public:
	void Nhap();
	void Xuat();
};

void SinhVien :: Nhap()
{
	cout<<"MA SINH VIEN: ";
	getline(cin, maSV);
	cout<<"TEN SINH VIEN: ";
	getline(cin, tenSV);
	cout<<"LOP: ";
	getline(cin, lop);
	cout<<"KHOA: ";
	cin>>khoa;
	
	do{
		cout<<"SO MON HOC: ";
		cin>>n;
	}while(n<=0);
	
	x = new MonHoc[n];
	
	for(int i=0; i<n; i++){
		x[i].Nhap();
	}
	
}

void SinhVien :: Xuat()
{
	cout<<setw(30)<<"PHIEU BAO DIEM"<<endl;
	
	cout<<setw(10)<<"Ma sinh vien: "<<maSV<<setw(20);
	cout<<"Ten sinh vien: "<<tenSV<<endl;
	cout<<"Lop: "<<lop<<setw(20);
	cout<<"Khoa: "<<khoa<<endl;
	
	cout<<"Bang diem: "<<endl;
	cout<<"Ten mon "<<setw(20)<<"So trinh "<<setw(20)<<"Diem "<<endl;
	
	for(int i=0; i<n; i++){
		x[i].Xuat();
	}
	
	float TB = 0;
	float tb = 0;
	for(int i=0 ;i<n; i++){
		TB = TB + (x[i].soTrinh * x[i].diem);
		tb = tb + x[i].soTrinh;
	}
	// tinh don vao ca 2 bien thanh phan kha la hay!!!
	float kq = TB / tb;
	
	cout<<setw(35)<<fixed<<setprecision(2)<<"DIEM TRUNG BINH: "<<kq<<endl;
	//ham fixed va setprecision de lam tron so ma minh mong muon!!!

	cout<<"Nhung mon hoc co so trinh lon hon 3: "<<endl;
	for(int i=0; i<n; i++){
		if(x[i].soTrinh > 3)
		{
			cout<<x[i].tenMon;
			cout<<endl;
		}
	}
}

void MonHoc :: Nhap()
{
	cin.ignore();
	cout<<"TEN MON HOC: ";
	getline(cin, tenMon);
	cout<<"SO TRINH: ";
	cin>>soTrinh;
	cout<<"DIEM: ";
	cin>>diem;
	
}

void MonHoc :: Xuat()
{
	cout<<tenMon<<setw(20)<<soTrinh<<setw(20)<<diem<<endl;
}

int main()
{
	SinhVien a;
	a.Nhap();
	a.Xuat();
	
	return 0;
}

