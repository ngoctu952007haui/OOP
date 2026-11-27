#include<iostream>
using namespace std;

class Mang
{
	float value[100];
	int n;
	
public:
	friend istream& operator>>(istream& is, Mang &Q);
	friend ostream& operator<<(ostream& os, Mang Q);
	Mang operator++();
	Mang operator--();
};


Mang Mang :: operator++()
{
	for(int i=1; i<n; i++)
	{
		for(int j=n-1; j>=i; j--)
		{
			if(value[j] < value[j-1])
			{
				float tg = value[j];
				value[j] = value[j-1];
				value[j-1] = tg;
			}
		}
	}
	return *this;
}

Mang Mang :: operator--()
{
	for(int i=1; i<n; i++)
	{
		for(int j=n-1; j>=i; j--)
		{
			if(value[j] > value[j-1])
			{
				float tg = value[j];
				value[j] = value[j-1];
				value[j-1] = tg;
			}
		}
	}
	return *this;
}

istream& operator>>(istream& is, Mang &Q)
{
	do{
		cout<<"Nhap so luog phan tu: ";
		is>>Q.n;
	}while(Q.n<=0);
	
	for(int i=0; i<Q.n; i++)
	{
		cout<<"value["<<i<<"] = ";
		is>>Q.value[i];
	}
	return is;
}

ostream& operator<<(ostream& os, Mang Q)
{
	for(int i=0; i<Q.n; i++)
	{
		os<<Q.value[i]<<" ";
	}
	return os;
}

int main()
{
	Mang K;
	cin>>K;
	cout<<K;
	
	cout<<"\nSap Xep Mang Tang Dan "<<++K<<endl;
	cout<<"\nSap Xep Mang Giam Dan "<<--K<<endl;
	return 0;
	
}
