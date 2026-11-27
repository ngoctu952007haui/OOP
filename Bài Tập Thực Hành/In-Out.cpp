#include<iostream>
#include<fstream>
using namespace std;

class HinhTamGiac
{
	float a,b,c;
public:
	float operator++();
	friend istream& operator>>(istream& is, HinhTamGiac &Q);
	friend ostream& operator<<(ostream& os, HinhTamGiac Q);
};

float HinhTamGiac :: operator++()
{
	return a+b+c;
}

istream& operator>>(istream& is, HinhTamGiac &Q)
{
	cout<<"a = ";
	is>>Q.a;
	cout<<"b = ";
	is>>Q.b;
	cout<<"c = ";
	is>>Q.c;
	return is;
}

ostream& operator<<(ostream& os, HinhTamGiac Q)
{
	os<<Q.a<<" "<<Q.b<<" "<<Q.c<<endl;
	os<<"Chu vi tam giac la: "<<++Q;
}

int main()
{
	HinhTamGiac A,B;
	cin>>A;
	cin>>B;
	cout<<A<<endl;
	cout<<B<<endl;
	ofstream fileOut("INOUT.txt");
    
    if (fileOut.is_open()) {
        fileOut << "Thong tin tam giac A: " << A <<endl;
        fileOut << "Thong tin tam giac B: " << B <<endl;
        fileOut.close();
        cout << "\nDa xuat thong tin cua A va B vao tep INOUT.txt thanh cong!" << endl;
    } else {
        cout << "\nKhong the mo tep de ghi!" << endl;
    }
	return 0;
}
