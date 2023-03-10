#include <iostream>
#include <string>
using namespace std;
int linearsearch(int arr[],int n,int k){
int i,flag=0;
for(i=0;i<n;i++){
if(arr[i]==k){
return i;
break;
}
}
return -1;
}
int main(){
int n;
int arr[10];
cout<<"Chetna sontaki 0827CI211051"<<endl;
cout<<"Enter the element";
cin>>n;
for(int i=0;i<n;i++){
cin>>arr[i];
}
int k;
cout<<"Enter the element to be search for:";
cin>>k;
int flag=linearsearch(arr,n,k);
if(flag==-1){
cout<<"Element not found";
}
else {
cout<<"Element found at "<<flag;
}
return 0;
}
