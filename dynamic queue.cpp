#include<iostream>
using namespace std;
struct Q
{
	int info;
	Q* next;
};
 Q *newn, *temp, *front=NULL, *rear=NULL;
int count=0,ch1,ch2;
//************************
void enqueue();
void dequeue();
void getnode();
void traverse();

int main()
{
	cout<<"Chetna sontaki 0827CI211051"<<endl;
	cout<<"Operation on queue\n";
	cin>>count;
	do
	{
		cout<<"\n1. insert\n2.delete\n.traverse\nEnter your choice\n";
		cin>>ch1;
		if(ch1==1)
		{
			enqueue();
		}
		else if(ch1==2)
		{
			dequeue();
		}
		else if(ch1==3)
		{
			traverse();
		}
		else
		{
			
			cout<<"\n press 1 to continue ";
			cin>>ch2;
		}
	}
		while(ch2==1);
		return 0;
		
}
//******************************
void getnode()
{
	newn=new Q;
	cout<<"enter data";
	cin>>newn->info;
	newn->next=NULL;
}
//*********************
void traverse()
{
	cout<<"\n*********************\nthe queue is\n";
	if(front==NULL)
	{
		cout<<"\n empty queue";
	}
	else
	{
		temp=front;
		while(temp!=NULL)
		{
			cout<<temp->info<<" ";
			temp=temp->next;
			cout<<"\n******************************************\n";
		}
	}
}
//**************************
void enqueue()
{
	getnode();
	if(newn==NULL)
	{
		cout<<"\n***************************\noverflow condition\n--------------------------\n";
	}
	else if(front==NULL)
	{
		++count;
		front=newn;
		rear=newn;
		traverse();
	}
	
}
//***********************************
void dequeue()
{
	if(front==NULL)
	{
		cout<<"\n---------------------\n underflow\n*****************\n";
	
		
	}
	else
	{
	--count;
		cout<<"\n the element deleted is"<<front->info;
		front=front->next;
		traverse();
	}
}
