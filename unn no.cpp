
#include <bits/stdc++.h>
using namespace std;
int divSum(int num)
{
	int result = 0;
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			if (i == (num / i))
				result += i;
			else
				result += (i + num / i);
		}
	}
	return (result + 1);
}
bool isUntouchable(int n)
{
	for (int i = 1; i <= 2 * n; i++) {
		if (divSum(i) == n)
			return false;
	}
	return true;
}
int main()
{
	int N = 52;
	if (isUntouchable(N))
		cout << "Yes";
	else
		cout << "No";
}

