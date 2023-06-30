//friend is a non  member function
//may be declared in private or public section of the class
//make a global function a friend
/* #include<iostream>
using namespace std;

class A
{
	int m_a;
	public:
	A(int a):m_a(a){}
	friend void display1(A&);
	friend void display2(A);
	friend void display3(A*);
};
void display1(A &ra)
{
	cout<<ra.m_a<<endl;
}
void display2(A ra)
{
	cout<<ra.m_a<<endl;
}
void display3(A *pa)
{
	cout<<pa->m_a<<endl;
}
int main()
{
	A obj(2);
//	cout<<obj.m_a;
	display1(obj);
	display2(obj);
	display3(&obj);
} */

#include<iostream>
using namespace std;

class A
{
	int m_a;
	friend void display1(A&);
	friend void display2(A);
	friend void display3(A*);
	public:
	A(int a):m_a(a){}
};
void display1(A &ra)
{
	cout<<ra.m_a<<endl;
}
void display2(A ra)
{
	cout<<ra.m_a<<endl;
}
void display3(A *pa)
{
	cout<<pa->m_a<<endl;
}
int main()
{
	A obj(2);
//	cout<<obj.m_a;
	display1(obj);
	display2(obj);
	display3(&obj);
}