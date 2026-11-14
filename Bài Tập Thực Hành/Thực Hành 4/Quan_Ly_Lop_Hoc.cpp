#include<iostream>
using namespace std;

class Nguoi
{
	protected:
		string hoTen;
		string ngaySinh;
		string queQuan;
public:
	void Nhap();
	void Xuat();
};

class SinhVien : public Nguoi
{
	string maSV;
	string nganh;
	int khoaHoc;
public:
	void Nhap();
	void Xuat();
	friend class LopHoc;
};

class LopHoc
{
	string maLH;
	string tenLH;
	string ngayMo;
	SinhVien *x;
	int n;
	Nguoi giaoVien;
public:
	void Nhap();
	void Xuat();
	void find();
	void SapXep();
	~LopHoc(){
		delete[] x;
	}
};

void LopHoc :: Nhap()
{
	cout<<"MA LH: ";
	getline(cin, maLH);
	cout<<"TEN LH: ";
	getline(cin, tenLH);
	cout<<"NGAY MO: ";
	getline(cin, ngayMo);
	
	do{
		cout<<"Nhap so luong sinh vien: ";
		cin>>n;
	}while(n<=0);
	
	x = new SinhVien[n];
	
	for(int i=0; i<n; i++){
		x[i].Nhap();
	}
	
	giaoVien.Nhap();
}

void LopHoc :: Xuat()
{
	cout<<maLH<<endl;
	cout<<tenLH<<endl;
	cout<<ngayMo<<endl;
	for(int i=0; i<n; i++){
		x[i].Xuat();
	}	
	
	giaoVien.Xuat();
}

void Nguoi :: Nhap()
{
	cin.ignore();
	cout<<"HO TEN: ";
	getline(cin, hoTen);
	cout<<"NGAY SINH: ";
	getline(cin, ngaySinh);
	cout<<"QUE QUAN: ";
	getline(cin, queQuan);
}

void Nguoi :: Xuat()
{
	cout<<hoTen<<endl;
	cout<<ngaySinh<<endl;
	cout<<queQuan<<endl;
}

void SinhVien :: Nhap()
{
	cin.ignore();
	Nguoi :: Nhap();
	cout<<"MA SV: ";
	getline(cin, maSV);
	cout<<"NGANH HOC: ";
	getline(cin, nganh);
	cout<<"KHOA: ";
	cin>>khoaHoc;
}

void SinhVien :: Xuat()
{
	Nguoi :: Xuat();
	cout<<maSV<<endl;
	cout<<nganh<<endl;
	cout<<khoaHoc<<endl;
}

void LopHoc :: find()
{
	int count = 0;
	for(int i=0; i<n; i++){
		if(x[i].khoaHoc == 11)
		{
			count++;
		}
	}
	cout<<"so sinh vien khoa 11 la: "<<count<<endl;
}

void LopHoc :: SapXep()
{
	for(int i=1; i<n; i++)
	{
		for(int j=n-1; j>=i; j--)
		{
			if(x[j-1].khoaHoc > x[j].khoaHoc)
			{
				SinhVien tg = x[j-1];
				x[j-1] = x[j];
				x[j] = tg;
			}
		}
	}
}

int main()
{
	LopHoc A1;
	A1.Nhap();
	A1.Xuat();
	A1.find();
	
	A1.SapXep();
	cout<<"Thong tin lop hoc sau khi sap xep: "<<endl;
	A1.Xuat();
	return 0;
}
