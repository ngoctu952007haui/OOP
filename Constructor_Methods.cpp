#include<iostream>
#include<cmath>
using namespace std;

class PTB2
{
	float a,b,c;
public:
	void Nhap();
	void Xuat();
	void Giai();
	PTB2(){
		a = 0;
		b = 0;
		c = 0;
	}
	
	PTB2(int A, int B, int C){
		a = A;
		b = B;
		c = C;
	}
};

void PTB2 :: Nhap()
{
	cout<<endl;
	cout<<"Nhap he so a: ";
	cin>>a;
	cout<<"Nhap he so b: ";
	cin>>b;
	cout<<"Nhap he so c: ";
	cin>>c;
}

void PTB2 :: Xuat()
{
	cout<<a<<"x2 +"<<b<<"x+"<<c<<" =0"<<endl;
}

void PTB2 :: Giai()
{
	if(a == 0 && b == 0 && c == 0)
		cout<<"Phuong trinh co vo so nghiem! ";
	
	else if(a == 0)
		cout<<"Phuong trinh khong phai bac 2! ";
	
	else{
		float delta = b*b - 4*a*c;
		
		if(delta < 0)
			cout<<"Phuong trinh vo nghiem! ";
		
		else if(delta == 0)
			cout<<"Phuong trinh co nghiem kep la: x1 = x2 = -b/2a"<<-b/2*a;
			
		else{
		
			cout<<"Phuong trinh co 2 nghiem phan biet! "<<endl;
			cout<<"x1 = -b + pow(delta,1/2) / 2a = "<<(-b + pow(delta,1/2)) / 2 * a<<endl;
			cout<<"x2 = -b - pow(delta,1/2) / 2a = "<<(-b - pow(delta,1/2)) / 2 * a<<endl;
		}
	}	
}

int main()
{
	PTB2 P,P1(1,-5,6);
	P.Xuat();
	P1.Xuat();
	P1.Giai();
	
	PTB2 Q;
	Q.Nhap();
	Q.Xuat();
	Q.Giai();
	
	return 0;
}
