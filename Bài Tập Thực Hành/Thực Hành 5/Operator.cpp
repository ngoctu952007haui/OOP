#include<iostream>
using namespace std;

class SoPhuc
{
	float phanThuc, phanAo;
public:
	SoPhuc()
	{
		phanThuc = 0;
		phanAo = 0;
	}
	
	SoPhuc(float a, float b)
	{
		phanThuc = a;
		phanAo = b;
	}
	
	SoPhuc operator+ (SoPhuc y)
	{
		SoPhuc tg;
		tg.phanThuc = this -> phanThuc + y.phanThuc;
		tg.phanAo = this -> phanAo + y.phanAo;
		return tg;
	}
	
	void Xuat()
	{
		cout<<"So phuc la: "<<phanThuc<<" + i*"<<phanAo<<endl;
	}
};

int main()
{
	SoPhuc x(2,3);
	x.Xuat();
	SoPhuc y(3,4);
	y.Xuat();
	SoPhuc z = x + y;
	z.Xuat();
}

