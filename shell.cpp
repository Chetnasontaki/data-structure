#include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
void shell(int a[],int n);
void swap(int &x,int &y);
int main()
{
	int n;
	cout<<"enter the size of array";cin>>n;
	int a[n];
	cout<<"enter the array elements";
	fillarray(a,n);
	cout<<"the unsorted array is\n";
	displayarray(a,n);
	cout<<"\ncalling function for sorting\n";
	shell(a,n);
	cout<<"the sorted array is";
	displayarray(a,n);	
}
void fillarray(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void displayarray(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
}
void swap(int &x,int &y){
	int temp=x;
	x=y;
	y=temp;
}

void shell(int a[],int n)
{
	int gap=n/2;
	while(gap>0)
	{
		for(int i=gap;i<=n-1;i++)
		{
			int temp=a[i],j=i;
			while(j>=gap && a[j-gap]>temp)
			{
				a[j]=a[j-gap];
				j=j-gap;
			}
			a[j]=temp;
		}
		gap=gap/2;
	}
}



