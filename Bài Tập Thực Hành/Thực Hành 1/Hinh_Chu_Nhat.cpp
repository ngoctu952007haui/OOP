#include<iostream>
using namespace std;

class HCN
{
	float chieuDai, chieuRong;
	
public:
	void Nhap();
	void Ve();
	float DienTich();
	float ChuVi();
};

void HCN :: Nhap()
{
	cout<<"CHIEU DAI: ";
	cin>>chieuDai;
	cout<<"CHIEU RONG: ";
	cin>>chieuRong;
}

void HCN :: Ve()
{
	for(int i=0; i<chieuDai; i++)
	{
		for(int j=0; j<chieuRong; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}

float HCN :: DienTich()
{
	return chieuDai * chieuRong;
}

float HCN :: ChuVi()
{
	return (chieuDai + chieuRong) * 2;
}

int main()
{
	HCN x;
	x.Nhap();
	x.Ve();
	
	cout<<"Dien tich HCN la: "<<x.DienTich()<<endl;
	cout<<"Chu vi HCN la: "<<x.ChuVi()<<endl;
	
	return 0;
}
