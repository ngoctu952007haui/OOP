#include<iostream>

using namespace std;

class Person
{
	protected:
		string hoTen;
		int ngaySinh;
		string que;
};

class KySu : public Person
{
	protected:
		string nganhHoc;
		int namTN;
	
public:
	void Nhap();
	void Xuat();
	int getNamTN()
	{
		return namTN;
	}
};

void KySu :: Nhap()
{
	cin.ignore();
	cout<<"NGANH HOC: ";
	getline(cin,nganhHoc);
	cout<<"NAM TOT NGHIEP: ";
	cin>>namTN;
	cin.ignore();
	cout<<"HO TEN: ";
	getline(cin,hoTen);
	cout<<"NGAY SINH: ";
	cin>>ngaySinh;
	cin.ignore();
	cout<<"QUE QUAN: ";
	getline(cin,que);
}

void KySu :: Xuat()
{
	cout<<nganhHoc<<endl;
	cout<<namTN<<endl;
	cout<<hoTen<<endl;
	cout<<ngaySinh<<endl;
	cout<<que<<endl;
}

int main()
{
	KySu *p;
	int n;
	do{
		cout<<"Nhap so ky su: ";
		cin>>n;
	}while(n<=0);
	
	p = new KySu[n];
	for(int i=0; i<n; i++){
		p[i].Nhap();
	}
	
	for(int i=0; i<n; i++){
		p[i].Xuat();
		cout<<"---------------"<<endl;
	}
	
	KySu max_ks = p[0];
	for(int i=1; i<n; i++){
		if(p[i].getNamTN() > max_ks.getNamTN())
		{
			max_ks = p[i];
		}
	}
	
	cout<<"Thong tin ky su tot nghiep nam gan day nhat: "<<endl;
	max_ks.Xuat();
	delete[] p;
	return 0;
}