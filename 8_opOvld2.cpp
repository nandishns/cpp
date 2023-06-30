//Overload pre increment and post increment
#include<iostream>
using namespace std;

class Vector
{
	int x;
	int y;
	
	public:
	Vector(int x1=0,int y1=0)
	{
		x=x1;
		y=y1;
	}
//Prefix increment
	Vector& operator++()
	{
		x++;
		y++;
		
		return *this;
	}
//Postfix increment	
	Vector operator++(int)
	{
		Vector temp=*this;
		
		x++;
		y++;
		
		return temp;
	}
	friend ostream& operator<<(ostream&,const Vector&);
};

ostream& operator<<(ostream& os,const Vector &v)
{
	os<<"("<<v.x<<","<<v.y<<")";
	
	return os;
}
int main()
{
	Vector v1(2,3),v2(2,3);
	
	Vector res=++v1;
	cout<<"res="<<res<<endl;
	cout<<"v1="<<v1<<endl;
	
	res=v2++;
	cout<<"res="<<res<<endl;
	cout<<"v2="<<v2<<endl;
}