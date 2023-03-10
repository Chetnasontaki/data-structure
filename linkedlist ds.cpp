#include<iostream>
using namespace std;
struct node
{
	int info;
	node *nextnode;
};
node * newnode,*start=NULL,*current,*temp;
int cnt=0,ch,ch1,ch2,ch3;
void emptylist();
node* getnode();
void display();
void insertfirst();
void insertlast();
void insertatpos();
void deletefirst();
void deletelast();
void deletefrompos();
int main()
{
	cout<<"chetna sontaki";
	cout<<"\n\noperations on a list\n";
	do
	{
		cout<<"\n 1. insertion \t 2. deletion \t 3. traversing \t 4.enter your choice \t";
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					cout<<"\n\n creating a list by adding a node\n\n";
					getnode();
					if(start==NULL)
					{
						emptylist();
					}
					else
					{
						cout<<"\n 1. insertion at fisrt poosition \n 2. insertion at last position \n 3. insertion at particular postion \n Enter your choice\t";
						cin>>ch1;
						if(ch1==1)
						{
							insertfirst();
						}
						else if(ch1==2)
						{
							insertlast();
						}
						else if(ch1==3)
						{
						    insertatpos();
						}
						else
						{
							cout<<"invalid choice";
							break;
						}
						}
						display();
						break;
					}
			case 2:
					{
						cout<<"\n\n deleting node \n\n";
						if(start==NULL)
						{
							cout<<"list is empty, no node exist to get deleted";
						}
						else
						{
							cout<<"\n 1. deletion from first posistion \n 2. deletion from last position \n 3. deletion from particular position \n Enter your choice: \n";
							cin>>ch2;
							if(ch2==1)
							{
								deletefirst();
							}
							else if(ch2==2)
							{
								deletelast();						
							}
							else if(ch2==3)
							{
								deletefrompos();
							}
							else
							{
								cout<<"invalid choice";
								break;
							}
							display();
							break;
							}
						}
			case 3: display();
						default : cout<<"invalid choice";
			}
						cout<<"\n press 1 if you want to perfrom more operations on linked list: \n";
						cin>>ch3;
				}
				while(ch3==1);
				cout<<"Thankyou for your valuble time";
				return 0;
		}
		//*********************************************************************************
		void emptylist()
		{
			cout<<"\n empty list , creting list by inserting very first node";
			++cnt;
			start=newnode;
			current=newnode;
		}
		//**************************************************************************
		node* getnode()
		{
			newnode=new node;
			cout<<"Enter element for node";
			cin>>newnode->info;
			newnode->nextnode=NULL;
		}
		//***************************************************
		void display()
		{
			cout<<"\n*************************************\n the generated list is\n";
			cout<<"\n Number of nodes="<<cnt<<"\n";
			if(start==NULL)
			{
				cout<<"\n emmpty list\n";
			}
			else
			{
				temp=start;
				while(temp!=NULL)
				{
					cout<<temp->info<<endl;
					temp=temp->nextnode;
				}
				cout<<"\n\n*****************************************\n\n";
				
			}
		}
		//**********************************************************************
		void insertfirst()
		{
			cout<<"\n adding nodes before 1st node";
			++cnt;
			newnode->nextnode=start;
			start=newnode;
		}
		//******************************************************************
		void insertlast()
		{
			cout<<"\n adding node after last node";
			++cnt;
			current->nextnode=newnode;
			current=newnode;
		}
		//********************************************************************************
		void insertatpos()
		{
			int pos;
			cout<<"\n enter the position:";
			cin>>pos;
			if(pos==1)
			{
				insertfirst();
			}
			else if(pos==(cnt+1))
			{
				insertlast();
			}
			else if(pos>1 && pos<=cnt)
			{
				++cnt;
				temp=start;
				for(int i=1;i<pos-1;i++)
				temp=temp->nextnode;
				newnode->nextnode=temp->nextnode;
				temp->nextnode=newnode;
			}
			else if(pos<1 || pos>(cnt+1))
			{
				cout<<"\n invalid position entered\n";
			}
		}
			//**********************************************************************
			void deletefirst()
			{
				cout<<"\n deleting first node";
				cnt--;
				start=start->nextnode;
			if(cnt==0)
				{
					current=NULL;
				}
			
			
			}
			//***********************************************************
			void deletelast()
			{
				cout<<"\n deleting last node";
				cnt--;
				if(cnt==0)
				{
					current=NULL;
					start=NULL;
				}
				else
				{
					temp=start;
					while(temp->nextnode != current)
					temp->nextnode=NULL;
					current=temp;
					
				}
			}
			//****************************************************
			void deletefrompos()
			{
				int pos;
				cout<<"\n Enter the position";
				cin>>pos;
				if(pos==1)
				{
					deletefirst();
				}
				else if(pos>=1 && pos<=cnt)
				{
					cnt--;
					temp=start;
					for(int i=1;i<pos-1;i++)
					temp=temp->nextnode;
					temp->nextnode=temp->nextnode->nextnode;
					if(cnt==1)
					{
						current=start;
					}
				}
				else if(pos<1 || pos>cnt)
				{
					cout<<"\n\ninvalid position entered\n";
				}
				//***********************************************************
				}
				
