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
	friend ostream& operator<<(ostream& os, PhanSo Q);
	friend istream& operator>>(istream& is, PhanSo &Q);
};

PhanSo PhanSo :: operator*(PhanSo Q)
{
	PhanSo K;
	K.tuSo = this->tuSo * Q.tuSo;
	K.mauSo = this->mauSo * Q.mauSo;
	return K;
}

float PhanSo :: operator++()
{
	return this->tuSo / this->mauSo;
}

ostream& operator<<(ostream& os, PhanSo Q)
{
	os<<Q.tuSo<<"/"<<Q.mauSo;
	return os;
}

istream& operator>>(istream& is, PhanSo &Q)
{
	cout<<"TS = ";
	is>>Q.tuSo;
	cout<<"MS = ";
	is>>Q.mauSo;
	return is;
}

int main()
{
	PhanSo A,B;
	cin>>A;
	cin>>B;
	PhanSo C = A * B;
	cout<<C<<endl;
	
	ofstream f("PHANSO.txt");
	f<<"Tich A*B = "<<C<<" = "<<++C<<endl;
	f.close();
	return 0;
}
