#include<iostream>
using namespace std;

class MangThuc
{
	float *x;
	int n;
	
public:
	void Nhap();
	void Xuat();
	float FindMax();
	float FindMin();
	~MangThuc()
	{
		delete[] x;
	}
};

void MangThuc :: Nhap()
{
	do{
		cout<<"Nhap so luong phan tu: ";
		cin>>n;
	}while(n<=0);
	
	x = new float[n];
	
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>x[i];
	}
}

void MangThuc :: Xuat()
{
	for(int i=0; i<n; i++)
	{
		cout<<x[i]<<" ";
	}
	cout<<endl;
}

float MangThuc :: FindMax()
{
	int max = x[0]; 
	for(int i=1; i<n; i++)
	{
		if(x[i] > max)
		{
			max = x[i];
		}
	}
	return max;
}

float MangThuc :: FindMin()
{
	int min = x[0]; 
	for(int i=1; i<n; i++)
	{
		if(x[i] < min)
		{
			min = x[i];
		}
	}
	return min;
}

int main()
{
	MangThuc a;
	a.Nhap();
	a.Xuat();
	
	cout<<"Phan thu lon nhat trong mang la: "<<a.FindMax()<<endl;
	cout<<"Phan thu nho nhat trong mang la: "<<a.FindMin()<<endl;
	return 0;
}
