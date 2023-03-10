#include <iostream>
using namespace std;
int max(int m, int n) {  return (m > n)? m: n; }
int *add(int A[], int B[], int m, int n)
{
   int size = max(m, n);
   int *sum = new int[size];
   for (int i = 0; i<m; i++)
     sum[i] = A[i];
   for (int i=0; i<n; i++)
       sum[i] += B[i];
   return sum;
}
{
    for (int i=0; i<n; i++)
    {
       cout << poly[i];
       if (i != 0)
        cout << "x^" << i ;
       if (i != n-1)
       cout << " + ";
    }
}
int main()
{
    int A[] = {5, 0, 10, 6};
    int B[] = {1, 2, 4};
    int m = sizeof(A)/sizeof(A[0]);
    int n = sizeof(B)/sizeof(B[0]);
    cout<<"Chetna sontaki"<<end1<<"0827CI211051"<<endl;
    cout << "First polynomial is \n";
    printPoly(A, m);
    cout << "\nSecond polynomial is \n";
    printPoly(B, n);
    int *sum = add(A, B, m, n);
    int size = max(m, n);
    cout << "\nsum polynomial is \n";
    printPoly(sum, size);
    return 0;
}
