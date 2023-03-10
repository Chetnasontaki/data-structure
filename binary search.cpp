#include<iostream>
using namespace std;
int search(int array[],int n,int x);
int main()
{
	int array[] = {2, 4, 0, 1, 9};
int item;
cout<<"enter the element you want to find:";
cin>>item;
int n = sizeof(array) / sizeof(array[0]);
int result = search(array, n, item);
(result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result;
}
int search(int array[], int n, int x)
{
for (int i = 0; i < n; i++)
if (array[i] == x)
return i;
return -1;
}

