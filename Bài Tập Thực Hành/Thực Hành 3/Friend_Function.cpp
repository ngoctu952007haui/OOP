#include<iostream>
using namespace std;

class SinhVien
{
	int maSV;
	string hoTen;
	float diemToan, diemLy, diemHoa;
	
public:
	void Nhap();
	void Xuat();
	friend void SapXepDiem(SinhVien *p,int n);
	friend void tinhTongDiem(SinhVien *p, int n);
};

void SinhVien :: Nhap()
{
	cout<<"MA SV: ";
	cin>>maSV;
	cin.ignore();
	cout<<"HO TEN: ";
	getline(cin,hoTen);
	cout<<"DIEM TOAN: ";
	cin>>diemToan;
	cout<<"DIEM LY: ";
	cin>>diemLy;
	cout<<"DIEM HOA: ";
	cin>>diemHoa;
}

void SinhVien :: Xuat()
{
	cout<<"--------------------"<<endl;
	cout<<maSV<<endl;
	cout<<hoTen<<endl;
	cout<<diemToan<<" "<<diemLy<<" "<<diemHoa<<endl;
	cout<<"TONG DIEM: "<<diemToan + diemLy + diemHoa<<endl;
}

void tinhTongDiem(SinhVien *p, int n)
{
	for(int i=0 ; i<n; i++)
	{
		cout<<"Tong diem cua sv "<<i + 1<<" la: "<<p[i].diemToan + p[i].diemLy + p[i].diemHoa<<endl;
	}
}

void SapXepDiem(SinhVien *p,int n)
{
	for(int i=1; i<n; i++)
	{
		for(int j=n-1; j>=i; j--)
		{
			float tong_j1 = p[j-1].diemToan + p[j-1].diemLy + p[j-1].diemHoa;
			float tong_j  = p[j].diemToan + p[j].diemLy + p[j].diemHoa;
			
			if(tong_j1 > tong_j){
				SinhVien tg = p[j-1];
				p[j-1] = p[j];
				p[j] = tg;
			}
		}
	}
}

int main()
{
	SinhVien *p;
	int n;
	
	do{
		cout<<"Nhap so luong sinh vien = ";
		cin>>n;
	}while(n<=0);
	
	p = new SinhVien[n];
	for(int i=0; i<n; i++){
		cout<<"Nhap thong tin SV "<< i + 1<< ": "<<endl;
		p[i].Nhap();
	}
	
	tinhTongDiem(p,n);
	
	SapXepDiem(p,n);
	
	
	
	
	
	
	for(int i=0; i<n; i++){
		p[i].Xuat();
	}
	
	return 0;
}
