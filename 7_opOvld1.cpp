#include<iostream>
using namespace std;

class Complex
{
	int re;
	int im;
	public:
	Complex(int r=0,int i=0){re=r;im=i;}
	void display()
	{
		cout<<re<<"+"<<im<<"i";
	}
	friend Complex operator+(const Complex &,const Complex &);
	friend ostream& operator<<(ostream& ,const Complex& );
	friend istream& operator>>(istream &,Complex&);
	friend bool operator==(const Complex&,const Complex&);
	friend bool operator!=(const Complex&,const Complex&);
};

bool operator==(const Complex& c1,const Complex& c2)
{
	return c1.re==c2.re && c1.im==c2.im;
}

bool operator!=(const Complex& c1,const Complex& c2)
{
	return !(c1==c2);
}
istream& operator>>(istream &is,Complex& c)
{
	is>>c.re;
	is>>c.im;
	
	return is;
}

ostream& operator<<(ostream& os,const Complex& c)
{
	os<<c.re<<"+"<<c.im<<"i";
	return os;
}


Complex operator+(const Complex &c1,const Complex &c2)
{
	Complex c3;
	
	c3.re=c1.re+c2.re;
	c3.im=c1.im+c2.im;
	
	return c3;
}
int main()
{
	Complex c1(2,3),c2(4,5);
	Complex c3=c1+c2;
	
	cout<<c1<<endl<<c2<<endl<<c3<<endl;
	cout<<"Enter two more complex numbers"<<endl;
	
	Complex c4,c5;
	cin>>c4>>c5;
	cout<<c4<<endl;
	cout<<c5<<endl;
	
	cout<<"Result of c4 compared with c5 for equality"<<(c4==c5)<<endl;
	cout<<"Result of c4 compared with c5 for not equality"<<(c4!=c5)<<endl;

	cout<<2+c4<<endl;
	cout<<(2==c4)<<endl;
}