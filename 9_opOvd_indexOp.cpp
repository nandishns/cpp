#include<iostream>
using namespace std;

class intList
{
	int mlist[10];
	public:
	intList()
	{
		for(int i=0;i<10;i++)
		{
			mlist[i]=0;
		}
	}
	
	int& operator[](int index)
	{
		static int err=-1;
		if(index>=0 && index <10)
			return mlist[index];
		else
			return err;
	}
};
int main()
{
	intList myList;
	
	myList[2]=10;
	cout<<myList[2]<<endl;
	cout<<myList[8]<<endl;
}