#include<iostream>
#include<cstring>
using namespace std;

class Student
{
	char m_name[25];
	char m_srn[11];
	static int noOfStudents;
	public:
	Student(char name[],char srn[])
	{
		strcpy(m_name,name);
		strcpy(m_srn,srn);
		noOfStudents++;
	}
	~Student()
	{
		noOfStudents--;
	}
	
	void display()
	{
		cout<<"Name="<<m_name<<" ";
		cout<<"SRN="<<m_srn<<endl;
	}
	int getNoOfStud(){ return noOfStudents;}
};
int Student::noOfStudents=0;
int main()
{
	Student s1("abc","PES1");
	Student s2("def","PES2");
	
	cout<<"No. of students="<<s1.getNoOfStud()<<endl;
	s1.display();
	s2.display();
}