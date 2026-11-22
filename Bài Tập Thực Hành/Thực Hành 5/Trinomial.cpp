#include<iostream>
using namespace std;

class TTB2
{
	float a, b, c;
public:
	TTB2(float d, float e, float f)
	{
		a = d;
		b = e;
		c = f;
	}
	
	TTB2()
	{
		a = 0;
		b = 0;
		c = 0;
	}
	friend ostream& operator<<(ostream& os, TTB2 Q);
	TTB2 operator- ();
	TTB2 operator+ (TTB2 Q);
	TTB2 operator* (TTB2 Q);
};

ostream& operator<<(ostream& os, TTB2 Q)
{
	os<<Q.a<<"x2 +"<<Q.b<<"x +"<<Q.c;
	return os;
}

TTB2 TTB2 :: operator-()
{
	TTB2 K;
	K.a = -this->a;
	K.b = -this->b;
	K.c = -this->c;
	return K;
}

TTB2 TTB2 :: operator+ (TTB2 Q)
{
	TTB2 K;
	K.a = this->a + Q.a;
	K.b = this->b + Q.b;
	K.c = this->c + Q.c;
	return K;
}

TTB2 TTB2 :: operator* (TTB2 Q)
{
	TTB2 K;
	K.a = this->a - Q.a;
	K.b = this->b - Q.b;
	K.c = this->c - Q.c;
	return K;
}

int main()
{
	TTB2 SP1(2,3,4), SP2(4,5,6);
	SP1 = -SP1;
	cout<<SP1<<endl;
	SP2 = -SP2;
	cout<<SP2<<endl;
	TTB2 SP3 = SP1 + SP2;
	cout<<SP3<<endl;
	TTB2 SP4 = SP1 * SP2;
	cout<<SP4<<endl;
	return 0;
}
