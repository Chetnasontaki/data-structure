#include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
void Merge(int a[],int l,int mid,int r);
void Mergesort(int a[],int l,int r);
int main()
{
	int n;
	cout<<"Chetna sontaki 0827CI211051"<<endl;
	cout<<"how many random element you want in your array:";
	cin>>n;
	int a[n];
	fillarray(a,n);
	cout<<"\n**********************************************\nbefore sorting\n";
	displayarray(a,n);
	cout<<"\n**********************************************";
	Mergesort(a,0,n-1);
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
	void Mergesort(int a[],int l,int r)
	{
		if(l<r)
		{
			int mid=(l+r)/2;
			Mergesort(a,l,mid);//LHS subarray
			Mergesort(a,mid+1,r);//RHS SUBARRAY
			Merge(a,l,mid,r);
		}
	}
	//****************************************************************
	void Merge(int a[],int l,int mid,int r)
	{
		int n1=mid-l+1;
		int n2=r-mid;
		int left[n1+1],right[n2+1];//PRESERVE DATA
		for(int i=0;i<n1;i++)
		{
		left[i]=a[l+i];	
		}
		for(int i=0;i<n2;i++)
		{
		right[i]=a[mid+1+i];
		}
		left[n1]=INT_MAX;
		right[n2]=INT_MAX;
		int i=0,j=0;
		for(int k=l;k<=r;k++)
		{
			if(left[i]<right[j])
			{ 
			a[k]=left[i++];
			}
			else 
			{
			a[k]=right[j++];
			}
		}
	}




