#include<iostream>

using namespace std;

class SoPhuc
{
	float thuc, ao;
public:
	SoPhuc(float a = 0, float b = 0)
	{
		thuc = a;
		ao = b;
	}
	
	SoPhuc operator+ (SoPhuc Q);
	SoPhuc operator- (SoPhuc Q);
	friend ostream& operator<<(ostream& out, SoPhuc Q);
};

ostream& operator<<(ostream& out, SoPhuc Q)
{
	out<<Q.thuc<<" + i * "<<Q.ao;
	return out;
}

SoPhuc SoPhuc::operator+ (SoPhuc Q)
{
	SoPhuc K;
	K.thuc = this->thuc + Q.thuc;
	K.ao = this->ao + Q.ao;
	return K;
}

SoPhuc SoPhuc :: operator- (SoPhuc Q)
{
	SoPhuc K;
	K.thuc = this->thuc - Q.thuc;
	K.ao = this->ao - Q.ao;
	return K;
}

int main()
{
	SoPhuc SP1(2,3), SP2(3,5);
	SoPhuc SP3 = SP1 + SP2;
	SoPhuc SP4 = SP1 - SP2;
	cout << "SP3 = " << SP3 << endl;
	cout << "SP4 = " << SP4 << endl;
	return 0;
}
