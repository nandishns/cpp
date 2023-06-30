#include<iostream>
using namespace std;

class Fraction
{
	int num,den;
	public:
	Fraction(int n=0,int d=0)
	{
		num=n;
		den=d;
	}
	operator float()
	{
		return (float)num/den;
	}
};

int main()
{
	Fraction f1(2,5);
	float v=f1;
	
	cout<<v<<endl;
}