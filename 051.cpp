//boubble sort
#include<iostream>
using namespace std;
int ar[40];
void swap(int *p,int *q){
int temp=*p;
*p=*q;
*q=temp;
}
void bubblesort(int n){
for(int i=0;i<n-1;i++){
for(int j=0;j<n-i-1;j++){
if(ar[j]>ar[j+1]){
swap(&ar[j],&ar[j+1]);
}
}
}
}
int main(){
int n;
cout<<"Enter the no. of array : ";
cin>>n;
cout<<"Enter the array elements : ";
for(int i=0;i<n;i++){
cin>>ar[i];
}
bubblesort(n);
cout<<"Sorted Array :"<<endl;
for(int i=0;i<n;i++){
cout<<ar[i]<<" ";
}
cout<<endl;
return 0;
}
