#include<iostream>
using namespace std;

class Nguoi
{
	protected:
		string hoTen;
		int tuoi;
		
public:
	void Nhap();
	void Xuat();
	int GetTuoi(){
		return tuoi;
	}
	void SetTuoi(int age){
		tuoi = age;
	}

};

class BenhVien
{
	string tenBV;
	string diaChi;
	string giamDoc;
	
public:
	friend class BenhNhan;
};

class BenhNhan : public Nguoi
{
	private:
		string id;
		string tienSu;
		string chanDoan;
		BenhVien y;
	
public: 
	void Nhap();
	void Xuat();
	string GetID(){
		return id;
	}

};

void BenhNhan :: Nhap()
{
	Nguoi :: Nhap();
	cout<<"MA ID: ";
	getline(cin,id);
	cout<<"TIEN SU: ";
	getline(cin,tienSu);
	cout<<"CHAN DOAN: ";
	getline(cin,chanDoan);
	cout<<"BENH VIEN: ";
	getline(cin,y.tenBV);
	cout<<"DIA CHI: ";
	getline(cin,y.diaChi);
	cout<<"GIAM DOC: ";
	getline(cin,y.giamDoc);
}

void BenhNhan :: Xuat()
{
	cout<<"--------------"<<endl;
	Nguoi :: Xuat();
	cout<<"ID: "<<id<<endl;
	cout<<"TIEN SU: "<<tienSu<<endl;
	cout<<"CHAN DOAN: "<<chanDoan<<endl;
	cout<<"BENH VIEN: "<<y.tenBV<<endl;
	cout<<"DIA CHI: "<<y.diaChi<<endl;
	cout<<"GIAM DOC: "<<y.giamDoc<<endl;
}



void Nguoi :: Nhap()
{
	cout<<"HO TEN: ";
	getline(cin,hoTen);
	cout<<"TUOI: ";
	cin>>tuoi;
	cin.ignore();
}

void Nguoi :: Xuat()
{
	cout<<"HO TEN: "<<hoTen<<endl;
	cout<<"TUOI: "<<tuoi<<endl;
}

int main()
{
	int n;
	int count = 0;
	BenhNhan *a;
	do{
		cout<<"So benh nhan la: ";
		cin>>n;
		cin.ignore();
	}while(n<=0);
	
	a = new BenhNhan[n];
	
	for(int i=0; i<n; i++){
		a[i].Nhap();
	}
	
	for(int i=0; i<n; i++){
		a[i].Xuat();
		if(a[i].GetTuoi() > 30)
		// lay ra tuoi cua tung benh nhan!!!, bang phuong thuc get.
		{
			count++;
		}
	}
	cout<<"So benh nhan tren 30 tuoi la: "<<count<<endl;
	
	cout<<"Nhung benh nhan co ma BN01: "<<endl;
	for(int i=0; i<n; i++){
		if(a[i].GetID() == "BN01")
		/* lay ID
		khi doi tuong a[i] khong the truy vao thuoc tinh ID trong lop BenhNhan
		*/
		{
			a[i].SetTuoi(20);
			a[i].Xuat();
		}
	}

	delete[] a;
	return 0;
}
