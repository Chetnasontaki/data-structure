#include<iostream>
using namespace std;
int Chessboard[10][10];  //globle 2D array
void Printboard(int n)   //function for printing the board
{
	for(int i=0 ; i<=n-1; i++)
	{
		for(int j=0; j<=n-1; j++)
		{
			cout<<Chessboard[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;
	
}
bool issafe(int col, int row, int n)//function for checking if the posistion is safe for placing the queen or not
{
	for(int i=0; i<row; i++)
	{
		if(Chessboard[i][col])
		{
				return false;
		}
	}
	for(int i=row ,j=col; i>=0 && j>=0 ; j-- ,i--)
	{
		if(Chessboard[i][j])
		{
			return false;
		}
	}
	for(int i=row , j=col; i>=0 && j<n ; j++ , i-- )
	{
		if(Chessboard[i][j])
		{
			return false;
		}
	}
	return true;
}
bool Solution(int n, int row) //function for checking the solution for provided number of the queens
{
	if(n==row)
	{
		Printboard(n);
		return true;
	}
	bool result=false;   //function is checking the result is true or false for backtraking algorithm
	for(int i=0; i<=n-1; i++)
	{
		if(issafe(i, row , n))
		{
			Chessboard[row][i]=1;
			result=Solution(n , row+1)|| result;
			Chessboard[row][i]=0;
			
		}
	}
	return result;
}
int main()
{
	ios_base::sync_with_stdio(false);  //this line trun off synchronization between c++ and c statndard stream
	cin.tie(NULL);     //unties input and output stream
	int n;
	cout<<"Enter the number of queens"<<endl;   //the number in the algorithm
	cin>>n;
	for(int i=0; i<n; i++)
	{
		for(int j=0 ;j<n; j++)
		{
			Chessboard[i][j]=0;
		}
	}
	bool result=Solution(n, 0);
	if(result==false)
	{
		cout<<"The solution dose not exist"<<endl;   //the number is applied in this chessborad is greater
	}
	else
	{
		cout<<endl;
	}
}
