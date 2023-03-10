#include<iostream> 
using namespace std;
void fillarray(int a[],int n);
 void displayarray(int a[],int n); 
 void countsort(int a[],int n); 
 void swap(int &x,int &y);
int main()
{
int n;
cout<<"Chetna sontaki 0827CI211051"<<endl;
cout<<"enter the size of array";cin>>n; int a[n];
cout<<"enter the array elements"; fillarray(a,n);
cout<<"the unsorted array is\n"; displayarray(a,n);
cout<<"\ncalling function for sorting\n"; countsort(a,n);

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
void swap(int &x,int &y){ int temp=x;
x=y;
 
y=temp;
}
int findmax(int a[],int n)
{	int max=a[0];
for(int i=1;i<=n-1;i++)
{
if(a[i]>max)
max=a[i];
}
return max;
}
void countsort(int a[],int n)
{
int max=findmax(a,n); int count[max+1]={0}; int output[n];
for(int i=0; i<=n-1; i++) count[a[i]]++;
for(int i=1; i<=max ; i++) count[i]=count[i]+count[i-1]; for(int i=n-1;i>=0;--i) output[--count[a[i]]]=a[i]; cout<<"After sorting"; displayarray(output,n);
}

