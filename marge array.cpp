#include<iostream>
using namespace std;
void mergearray(int a1[],int n1,int a2[],int n2,int a3[],int n3);
int main()
{
int n1=4,n2=4,n3=8;
int a1[n1];
int a2[n2];
int a3[n3];
cout<<"Chetna sontaki 0821CI211051"<<endl;
cout<<"Enter elements of a1 array:";
for(int i=0;i<n1;i++){
cin>>a1[i];
}
cout<<"Enter elements of a2 array:";
for(int j=0;j<n2;j++){
cin>>a2[j];
}
cout<<"After merging";
mergearray(a1,n1,a2,n2,a3,n3);
for(int g=0;g<n3;g++){
cout<<a3[g]<<" ";
}
}
void mergearray(int a1[],int n1,int a2[],int n2,int a3[],int n3)
{
int i=0,j=0,k=0;
for(int l=0;l<n3;l++)
{
if( a1[i]<a2[j]){
a3[k]=a1[i];
i++;
k++;
}
else if(a1[i]>a2[j]){
a3[k]=a2[j];
k++;
j++;
}
else if(a1[i]==a2[j]){
a3[k]=a1[i];
k++;
i++;
a3[k]=a2[j];
k++;
j++;
}
if(i==n1 && j!=n2 || i!=n1 && j==n2){
break;
}
}
if(i==n1){
for(int p=k;p<=n3-1;p++){
a3[p]=a2[j++];
}
}
else{
for(int k2=k;k2<=n3-1;k2++){
a3[k2]=a1[i++];
}
}
}
