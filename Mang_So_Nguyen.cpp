#include<iostream>
using namespace std;

class MangNguyen
{
	int x[100];
	int n;

public:
	void Nhap();
	void Xuat();
	void SapXepMang();
};

void MangNguyen :: Nhap()
{
	do{
		cout<<"Nhap so luong phan tu: ";
		cin>>n;
	}while(n<=0);
	
	for(int i=0; i<n; i++)
	{
		cout<<"x["<<i<<"] = ";
		cin>>x[i];
	}

}

void MangNguyen :: Xuat()
{
	for(int i=0; i<n; i++)
	{
		cout<<x[i]<<" ";
	}
	cout<<endl;
}

void MangNguyen :: SapXepMang()
{
	for(int i=0; i<n; i++)
	{
		for(int j=n-1; j>=i; j--)
		{
			if(x[j] < x[j-1])
			{
				int tg = x[j];
				x[j] = x[j-1];
				x[j-1] = tg;
			}
		}
	}
}

int main()
{
	MangNguyen a;
	a.Nhap();
	a.Xuat();
	cout<<"Mang sau khi sap tang dan: "<<endl;
	a.SapXepMang();
	a.Xuat();
	
	return 0;
}
