#include<iostream>
using namespace std;

class School
{
	string name;
	string date;
	
public:
	friend class Faculty;
	friend class Student;
};

class Faculty
{
	string nameFaculty;
	string dateWork;
	School x;
public:
	void Nhap();
	void Xuat();
	friend class Student;
};

class Person
{
	protected:
		string namePerson;
		string birth;
		string address;
	
public:
	void Nhap();
	void Xuat();
	Person(){
		namePerson = " ";
		birth = " ";
		address = " ";
	}
};

class Student : public Person
{
	Faculty y;
	string lop;
	float diemTK;
	
public:
	void Nhap();
	void Xuat();
	Student(){
		y.nameFaculty = " ";
		y.dateWork = " ";
		y.x.name = " ";
		y.x.date = " ";
		lop = " ";
		diemTK = 0;
	}
};

void Faculty :: Nhap()
{
	cout<<"TEN GIANG VIEN: ";
	getline(cin, nameFaculty);
	cout<<"NGAY VAO LAM VIEC: ";
	getline(cin, dateWork);
	cout<<"TEN TRUONG: ";
	getline(cin, x.name);
	cout<<"NGAY TUYEN DUNG: ";
	getline(cin, x.date);
}

void Faculty :: Xuat()
{
	cout<<nameFaculty<<endl;
	cout<<dateWork<<endl;
	cout<<x.name<<endl;
	cout<<x.date<<endl;
}

void Person :: Nhap()
{
	cout<<"TEN SINH VIEN: ";
	getline(cin, namePerson);
	cout<<"NGAY SINH: ";
	getline(cin, birth);
	cout<<"DIA CHI: ";
	getline(cin, address);
}

void Person :: Xuat()
{
	cout<<namePerson<<endl;
	cout<<birth<<endl;
	cout<<address<<endl;
}

void Student :: Nhap()
{
	Person :: Nhap();
	cout<<"LOP: ";
	getline(cin, lop);
	cout<<"DIEM TONG KET: ";
	cin>>diemTK;
}

void Student :: Xuat()
{
	Person:: Xuat();
	cout<<lop<<endl;
	cout<<diemTK<<endl;
}

int main()
{
	Student Tu;
	Tu.Nhap();
	Tu.Xuat();
	return 0;
}
