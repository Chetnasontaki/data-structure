
#include<iostream>
using namespace
std;
void insertionsort(int arr[],int n){
int i,key,j;
for(i=1;i<n;i++){
key=arr[i];
j=i-1;
while(j>=0&&arr[j]>key){
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=key;
}
}
int main(){
cout<<"Chetna sontaki"<<endl<<"0827CI211051"<<endl;
int arr[20]; int n;
cout<<"Enter the size of array : ";
cin>>n;
cout<<"Enter the elements of the array : ";
for(int i=0;i<n;i++){
cin>>arr[i];
}
insertionsort(arr,n);
cout<<"Array after insertion sort : ";
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
