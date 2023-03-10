#include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
int partition(int a[],int l,int r);
void Quicksort(int a[],int l,int r);
void swap(int & x,int & y);
int main()
{
	int n;
	cout<<"Chetna sontaki 0827CI211051"<<endl;
	cout<<"\nhow many random element you want in your array:";
	cin>>n;
	int a[n];
	fillarray(a,n);
	cout<<"\n**********************************************\n before sorting\n";
	displayarray(a,n);
	cout<<"\n**********************************************";
	Quicksort(a,0,n-1);
	cout<<"\n**********************************************\nafter sorting\n";
	displayarray(a,n);
	cout<<"\n**********************************************\n";
	return 0;
}
	void fillarray(int a[],int n)
	{
		cout<<"\n enter elements to the array\n";
		for(int i=0;i<n;i++)
		{
				cin>>a[i];
		}
	
	}
	//************************************************************
	void displayarray(int a[],int n)
	{
		for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	}
	//***********************************************************
	void swap(int & x,int & y)
	{
		int temp=x;
		x=y;
		y=temp;
	}

	//****************************************************************
	void Quicksort(int a[],int l,int r)
	{
		if(l<r)
		{
			int pos=partition(a,l,r);
			Quicksort(a,l,pos-1);
			Quicksort(a,pos+1,r);
		}
	}
		//**********************************************************
	int partition(int a[],int l,int r)
	{
		int i=l-1,pivot=a[r];
		for(int j=l;j<=r-1;j++)
		{
			if(a[j]<pivot)
			swap(a[++i],a[j]);
		}
		swap(a[++i],a[r]);
		return i;
		
	}
		
	




