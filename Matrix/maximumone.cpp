/*
Problem statement-
Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.

Example 1:

Input: 
N = 4 , M = 4
Arr[][] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}}
Output: 2
Explanation: Row 2 contains 4 1's (0-based
indexing).

Example 2:

Input: 
N = 2, M = 2
Arr[][] = {{0, 0}, {1, 1}}
Output: 1
Explanation: Row 1 contains 2 1's (0-based
indexing).
*/

//1st Approach
/*#include<bits/stdc++.h>
using namespace std;
int maximumone(vector<vector<int>>&matrix,int row,int column)
{
	int rowindex=0;
	for(int i=0;i<column;i++)
	{
		for(int j=0;j<row;j++)
		{
			if(matrix[i][j]==1)
				return rowindex;
		}
	}
	return -1;
}
int main()
{
	 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int row,column;
    cin>>row>>column;
    vector<vector<int>>matrix(row);
    for(int i=0;i<row;i++)
    {
      matrix[i].assign(column,0);
      for(int j=0;j<column;j++)
          cin>>matrix[i][j];
    }
    int res=maximumone(matrix,row,column);
    cout<<res;
     return 0;
}
*/

//optimized approach-o(row*column)
#include<bits/stdc++.h>
using namespace std;
int maximumone(vector<vector<int>>&matrix,int row,int column)
{
	int r=0;
	int c=column-1;
	int max_row_index=1;
	while(r<row && c>=0)
	{
		if(matrix[r][c]==1)
		{
			max_row_index=r;
			c--;
		}
		else
			r++;
	}
	return max_row_index;
}
int main()
{
	 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int row,column;
    cin>>row>>column;
    vector<vector<int>>matrix(row);
    for(int i=0;i<row;i++)
    {
      matrix[i].assign(column,0);
      for(int j=0;j<column;j++)
          cin>>matrix[i][j];
    }
    int res=maximumone(matrix,row,column);
    cout<<res;
     return 0;
}