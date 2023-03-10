
#include<iostream>
using namespace std;
bool isPerfect(long long int n)
{
	long long int sum = 1;
	for (long long int i=2; i*i<=n; i++)
	{
		if (n%i==0)
		{
			if(i*i!=n)
				sum = sum + i + n/i;
			else
				sum=sum+i;
		}
	}
	if (sum == n && n != 1)
		return true;

	return false;
}
int main()
{
	cout << "Below are all perfect numbers till 10000\n";
	for (int n =2; n<10000; n++)
		if (isPerfect(n))
			cout << n << " is a perfect number\n";

	return 0;
}

