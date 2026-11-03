#include<iostream>

using namespace std;

class Electronic
{
	protected:
		float congSuat;
		float dienAp;
		
public:
	Electronic(float C, float D)
	{
		congSuat = C;
		dienAp = D;
	}
};

class MayGiat : public Electronic
{
	float dungTich;
	string loai;
	
public:
	MayGiat(float dt, string L, float C, float D) : Electronic(C,D)
	{
		dungTich = dt;
		loai = L;
	}
	void Xuat();
};

class TuLanh : public Electronic
{
	float dungTich1;
	int soNgan;
	
public:
	TuLanh(float dt1, int S, float C, float D) : Electronic(C,D)
	{
		dungTich1 = dt1;
		soNgan = S;
	}
	void Xuat();
};

void MayGiat :: Xuat()
{
	cout<<"Thong tin may giat: "<<endl;
	cout<<dungTich<<endl;
	cout<<loai<<endl;
	cout<<congSuat<<endl;
	cout<<dienAp<<endl;
}

void TuLanh :: Xuat()
{
	cout<<"Thong tin tu lanh: "<<endl;
	cout<<dungTich1<<endl;
	cout<<soNgan<<endl;
	cout<<congSuat<<endl;
	cout<<dienAp<<endl;
}

int main()
{
	MayGiat a(90,"Tot",1000,220);
	TuLanh b(110,2,1000,230);

	a.Xuat();
	b.Xuat();
	
	return 0;	
}
