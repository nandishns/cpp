#include<iostream>
using namespace std;

class staticDemo
{
	public:
	int m_a=10;
	const static int m_b=20;
	int geta() const
	{
//		m_a++;
		return m_a;
	}
//A static member function cannot be a const function
	static int getb() //const
	{
		return m_b;
	}
};
//int staticDemo:: m_b=0;
int main()
{
	staticDemo obj1;
//	cout<<"b="<<staticDemo::m_b<<endl;
//	cout<<"a="<<obj1.m_a<<endl;
//	cout<<"b="<<obj1.m_b<<endl;
	cout<<obj1.geta()<<endl;
	cout<<obj1.getb()<<endl;
}

/* #include<iostream>
using namespace std;

class staticDemo
{
	int m_a;
	static int m_b;
	public:
		int geta(){return m_a;}
		static int getb(){return m_b;}
};
int staticDemo:: m_b=0;
int main()
{
	cout<<"b="<<staticDemo::getb()<<endl;
} */