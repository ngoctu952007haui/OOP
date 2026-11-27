#include<iostream>
#include<fstream>
using namespace std;

class PhanSo
{
	float tuSo, mauSo;
public:
	PhanSo()
	{
		tuSo = 0;
		mauSo = 1;
	}
	
	PhanSo(float t, float m)
	{
		tuSo = t;
		mauSo = m;
	}
	
	PhanSo operator*(PhanSo Q);
	float operator++();
	friend istream& operator>>(istream& is, PhanSo &Q);
	friend ostream& operator<<(ostream& os, PhanSo Q);
};

PhanSo PhanSo :: operator*(PhanSo Q)
{
	PhanSo K;
	K.tuSo = tuSo * Q.tuSo;
	K.mauSo = mauSo * Q.mauSo;
	return K;
}

float PhanSo :: operator++()
{
	return tuSo/mauSo;
}

istream& operator>>(istream& is, PhanSo &Q)
{
	cout<<"TS = ";
	is>>Q.tuSo;
	cout<<"MS = ";
	is>>Q.mauSo;
	return is;
}

ostream& operator<<(ostream& os, PhanSo Q)
{
	os<<Q.tuSo<<"/"<<Q.mauSo;
	return os;
}

int main()
{
	PhanSo A,B;
	cout<<"Nhap phan so thu 1:"<<endl;
	cin>>A;
	cout<<"\nNhap phan so thu 2:"<<endl;
	cin>>B;
	PhanSo C = A * B;
	cout<<"Tich cua 2 phan so tren la: "<<C;
	
	ofstream f("PHANSO.txt");
	f<<"Tich cua 2 phan so tren la: "<<C<<"="<<++C<<endl;
	f.close();
	return 0;
}

