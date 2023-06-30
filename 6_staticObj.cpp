#include<iostream>
using namespace std;

class demo
{
	public:
	int m_a=10;
	demo()
	{
		cout<<"ctor cald "<<this<<endl;
	}
	
	~demo()
	{
		cout<<"dtor cald "<<this<<endl;
	}
};

int main()
{
	{
		demo obj1;
		static demo obj2;
	}
	cout<<"here"<<endl;
}