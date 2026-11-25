#include<iostream>
using namespace std;

class Hang
{
	string maHang;
	string tenHang;
	int soLuong;
	float donGia;
public:
	friend istream& operator>>(istream& is, Hang &Q);
	friend ostream& operator<<(ostream& os, Hang Q);
};

istream& operator>>(istream& is, Hang &Q)
{
	cout<<"MA HANG: ";
	getline(is,Q.maHang);
	cout<<"TEN HANG: ";
	getline(is,Q.tenHang);
	cout<<"SO LUONG: ";
	is>>Q.soLuong;
	cout<<"DON GIA: ";
	is>>Q.donGia;
	return is;
}

ostream& operator<<(ostream& os, Hang Q)
{
	os<<Q.maHang<<endl;
	os<<Q.tenHang<<endl;
	os<<Q.soLuong<<endl;
	os<<Q.donGia<<endl;
	return os;
}

int main()
{
	Hang A;
	cin>>A;
	cout<<"---Thong Tin---"<<endl;
	cout<<A;
	return 0;
}
