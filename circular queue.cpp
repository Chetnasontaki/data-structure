#include<iostream>
#include<process.h>
using namespace std;
//***************
void CEnqueue(int Q[],int &rear,int item, int& num, int n );
void CDequeue(int Q[], int &front, int& num, int n);
void Ctraverse(int Q[], int front, int rear, int num, int n);
//**************
int main()
{   int n,num=0;
	cout<<"Enter size of Queue"; cin>>n;
	int Q[n],ch, item;
	char ch2;
	int front=-1, rear=-1;
	
do
{
	cout<<"Chetna sontaki 0827CI211051"<<endl;
	cout<<"1.Insert(Enqueue)\n2.Delete(Dequeue)\n3.Exit\nEnter your choice\n"; cin>>ch;
	switch(ch)
	{
		case 1: 
		{
			if(num==n) cout<<"\n**********\nOverflow\n**********\n";
			else 
			{
			cout<<"Enter the item to insert"; cin>>item;
			CEnqueue(Q, rear, item, num, n);	
			Ctraverse(Q,front,rear, num, n);
			}
			break;
		}
		
		case 2: 
		{
			if(num==0) cout<<"\n**********\nunderflow\n**********\n";
			else 
			{
			CDequeue(Q, front, num,n);   
			Ctraverse(Q,front,rear,num, n);}
			break;
		}
		
		case 3:
			exit(-1);
			
		default: cout<<"Invalid choice";
	}
	
	cout<<"\nPress Y/y to continue"; cin>>ch2;
} while(ch2=='y' || ch2=='Y');
	
}
//******************

void CEnqueue(int Q[],int &rear,int item, int& num, int n)
{  
rear=(rear+1)%n;
Q[rear]=item; num++; }  
//******************

void CDequeue(int Q[], int &front, int& num, int n)
{ front=(front+1)%n; num--;}
//*****************
void Ctraverse(int Q[], int front, int rear, int num, int n)
{   
if(num==0) 
{
	cout<<"\n**********\nEmpty Queue\n**********\n";
}
else
{
cout<<"\nThe updated Circular Queue is \n";

	cout<<"\n***********\nTotal number of elements: "<<num<<endl;
	int i=front+1;
	for(int j=1; j<=num;j++) 
	{
	cout<<Q[i]<<" ";
	i=(i+1)%n;
	}
	cout<<"\n***********\n";
}
}
