//friend is a non  member function
//may be declared in private or public section of the class
//make a member function a friend
#include<iostream>
using namespace std;

class Node;

class List
{
	Node *head,*tail;
	public:
	List():head(NULL),tail(NULL){}
	void display();
	void append(Node*);
};

class Node
{
	int info;
	Node *next;
	public:
	Node(int i):info(i),next(NULL){}
	friend void List:: display();
	friend void List:: append(Node*);
};

void List::display()
{
	if(head==NULL)
		cout<<"Empty List"<<endl;
	else
	{
		Node *p=head;
		
		while(p!=NULL)
		{
			cout<<p->info<<" ";
			p=p->next;
		}
		cout<<endl;
	}
}
void List::append(Node *p)
{
	if(head==NULL)
		head=tail=p;
	else
	{
		tail->next=p;
		tail=tail->next;
	}
}

int main()
{
	List l;
	l.display();
	Node n1(10),n2(20),n3(30);
	
	l.append(&n1);
	l.append(&n2);
	l.append(&n3);
	
	l.display();
}