#include<iostream>
using namespace
std;
int arr[40];
void swap(int *p,int *q){
int temp=*p;
*p=*q;
*q=temp;
}
void bubblesort(int n){
for(int i=0;i<n-1;i++){
for(int j=0;j<n-i-1;j++){
if(arr[j]>arr[j+1]){
swap(&arr[j],&arr[j+1]);
}
}
}
}
int main(){
cout<<"Chetna sontaki"<<endl; cout<<"0827CI211051"<<endl;
int n;
cout<<"Enter the no. of array : ";
cin>>n;
cout<<"Enter the array elements : ";
for(int i=0;i<n;i++){
cin>>arr[i];
}
bubblesort(n);
cout<<"Sorted Array :"<<endl;
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
