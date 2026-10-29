#include<iostream>
using namespace std;

class Array
{
	int *value;
	int n;
	
public:
	void Nhap();
	void Xuat();
	
	Array(){
		n = 0;
	}
	
	Array(int N){
		n = N;
		value = new int[n];
		for(int i=0; i<n; i++){
			value[i] = 0;
		}
	}
	
	~Array(){
		n = 0;
		delete[] value;
	}
};

void Array :: Nhap()
{

	do{
		cout<<"Nhap so luong phan tu: ";
		cin>>n;
	}while(n<=0);
	
	value = new int[n];
	
	for(int i=0; i<n; i++){
		cout<<"value["<<i<<"] = ";
		cin>>value[i];
	}

}

void Array :: Xuat()
{
	cout<<"Mang ban vua nhap la: "<<endl;
	for(int i=0; i<n; i++){
		cout<<value[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	Array a(5);
	a.Xuat();
	
	a.Nhap();
	a.Xuat();
	
	return 0;
}
