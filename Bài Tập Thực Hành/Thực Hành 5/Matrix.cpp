#include<iostream>
using namespace std;

class Matrix
{
	double a[20][20];
	int n, m;
public:
	friend istream& operator>>(istream& is, Matrix &Q);
	friend ostream& operator<<(ostream& os, Matrix Q);
	Matrix operator-();
	Matrix operator+(Matrix Q);
	Matrix operator-(Matrix Q);	
};

istream& operator>>(istream& is, Matrix &Q)
{
	do{
		cout<<"Nhap kich thuoc hang n = ";
		is>>Q.n;
		cout<<"Nhap kich thuoc cot m = ";
		is>>Q.m;
	}while(Q.n<=0 || Q.m <=0);
	
	for(int i=0; i<Q.n; i++)
	{
		for(int j=0; j<Q.m; j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] = ";
			is>>Q.a[i][j];
		}
	}
	return is;
}

ostream& operator<<(ostream& os, Matrix Q)
{
	for(int i=0; i<Q.n; i++)
	{
		for(int j=0; j<Q.m; j++)
		{
			os<<Q.a[i][j]<<" ";
		}
		os<<endl;
	}
	return os;
}

Matrix Matrix :: operator-()
{
	Matrix K;
	K.n = this->n;
	K.m = this->m;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			K.a[i][j] = -this->a[i][j];
		}
	}
	return K;
}

Matrix Matrix :: operator+(Matrix Q)
{
	Matrix K;
	K.n = this->n;
	K.m = this->m;

	if(this->n == Q.n && this->m == Q.m)
	{
		cout<<"Thoa man dieu kien hang = hang, cot = cot";
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				K.a[i][j] = this->a[i][j] + Q.a[i][j];
			}
		}	
	}
	return K;
}

Matrix Matrix :: operator-(Matrix Q)
{
	Matrix K;
	K.n = this->n;
	K.m = this->m;
	
	if(this->n == Q.n && this->m == Q.m)
	{
		cout<<"Thoa man dieu kien hang = hang, cot = cot";
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				K.a[i][j] = this->a[i][j] - Q.a[i][j];
			}
		}	
	}
	return K;
}

int main()
{
	Matrix P,Q;
	cout<<"Nhap ma tran 1:"<<endl;
	cin>>P;
	cout<<"\nNhap ma tran 2: "<<endl;
	cin>>Q;
	
	P = -P;
	cout<<P<<endl;
	Q = -Q;
	cout<<Q<<endl;
	
	cout<<"\nTong cua 2 ma tran la: "<<endl;
	Matrix F = P + Q;
	cout<<F<<endl;
	cout<<"\nHieu cua 2 ma tran la: "<<endl;
	Matrix M = P - Q;
	cout<<M<<endl;
	
	return 0;
		
}
