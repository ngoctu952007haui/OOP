#include<iostream>
using namespace std;

class PhanSo
{
	float tuSo, mauSo;

public:
	friend istream& operator>>(istream& is, PhanSo &Q);
	friend ostream& operator<<(ostream& os, PhanSo Q);
	PhanSo operator* (PhanSo Q);
	PhanSo operator/ (PhanSo Q);
	PhanSo operator+ (PhanSo Q);
	PhanSo operator- (PhanSo Q);
//	float PhanSo()
//	{
//		return tuSo/mauSo;
//	}
};

istream& operator>>(istream& is, PhanSo &Q)
{
	is>>Q.tuSo;
	is>>Q.mauSo;
	return is;
}

ostream& operator<<(ostream& os, PhanSo Q)
{
	os<<Q.tuSo<<" / "<<Q.mauSo;
	return os;
}

PhanSo PhanSo :: operator*(PhanSo Q)
{
	PhanSo K;
	K.tuSo = this->tuSo * Q.tuSo;
	K.mauSo = this->mauSo * Q.mauSo;
	return K;
}

PhanSo PhanSo :: operator/(PhanSo Q)
{
	PhanSo K;
	K.tuSo = this->tuSo * Q.mauSo;
	K.mauSo = this->mauSo * Q.tuSo;
	return K;
}

PhanSo PhanSo :: operator+(PhanSo Q)
{
	PhanSo K;
	K.tuSo = this->tuSo * Q.mauSo + Q.tuSo * this->mauSo;
	K.mauSo = this->mauSo * Q.mauSo;
	return K;
}

PhanSo PhanSo :: operator-(PhanSo Q)
{
	PhanSo K;
	K.tuSo = this->tuSo * Q.mauSo - Q.tuSo * this->mauSo;
	K.mauSo = this->mauSo * Q.mauSo;
	return K;
}

int main()
{
	PhanSo P1, P2;
	cin>>P1;
	cin>>P2;
	
	PhanSo P3 = P1 * P2;
	PhanSo P4 = P1 / P2;
	PhanSo P5 = P1 + P2;
	PhanSo P6 = P1 - P2;
	
	cout<<P3<<endl;
	cout<<P4<<endl;
	cout<<P5<<endl;
	cout<<P6<<endl;
	return 0;
}

