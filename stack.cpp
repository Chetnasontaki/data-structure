#include<iostream>
using namespace std;
struct stack{
	int info;
	stack *next;
};
stack *newn,*bottom=NULL,*top=NULL,*temp;
int n=0,ch,choice;
void getnode();
void push();
void pop();
void traverse();

//****************************
int main(){
	cout<<"Chetna sontaki 0827CI211051"<<endl;
	cout<<"operations on stack \n";
	int ch,ch1;

do
{
	cout<<"\n 1.push \n 2.pop \n 3. traverse \n Enter your choice:\n";
	cin>>ch;
	if(ch==1)
	{
		push();traverse();
	}
	else if(ch==2)
	{
		pop();traverse();
	}
	else if(ch==3)
	{
		traverse();
	}
	else
	{
		cout<<"\ninvalid choice";
	}
	cout<<"\npress 1 to continue";
	cin>>ch1;
	
}while(ch1==1);
	return 0;
}
//************************************
void push()
{
	getnode();
	if(top==NULL)
	{
		bottom=newn;
		top=newn;
		n++;//
	}
	else if(top==NULL)
	{
	
	top->next=newn;
	top=newn;
	n++;
}
}
//*********************************
void pop()
{
	if(top==NULL)
	{
		cout<<"underflow condition";
	}
	else if(top==bottom)
	{
		top=NULL;
		bottom=NULL;
	}
	else
	{
		temp=bottom;
		while(temp->next!=top)
		{
		temp=temp->next;
	}
	top=temp;
	top->next=NULL;
	n--;
	}
}
//*********************************
void getnode()
{
newn= new stack;
cout<<"enter element:";
cin>>newn->info;
newn->next=NULL;
}
//********************************
void traverse()
{
	if(bottom==NULL)
	{
		cout<<"empty stack";
	}
	else
	{
		temp=bottom;
		while(temp!=NULL)
		{
			cout<<temp->info;
			temp=temp->next;
		}
	}
}
