//Search In a Matrix-
/*Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.

//Brute force approach
*/
/*
#include<bits/stdc++.h>
using namespace std;
bool searchmatrix(vector<vector<int>>&matrix,int target)
{
	int row=matrix.size();
	int column=matrix[0].size();
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(matrix[i][j]==target)
				return true;
		}
	}
	return false;

}
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int row,column;
    cin>>row>>column;
    int target;
    cin>>target;
    vector<vector<int>>matrix(row);
    for(int i=0;i<row;i++)
    {
    	matrix[i].assign(column,0);
    	for(int j=0;j<column;j++)
    		cin>>matrix[i][j];
    }
    if(searchmatrix(matrix,target)==true)
    	cout<<"True";
    else
    	cout<<"False";

	return 0;
}
*/

//2nd Approach
//Using Binary search

#include<bits/stdc++.h>
using namespace std;

bool searchmatrix(vector<vector<int>>&matrix,int target)
{
	int row=matrix.size();
	int column=matrix[0].size();
	for(int i=0;i<row;i++)
		{
			int start=0,end=column-1,mid=0;
			while(start<=end)
			{
				mid=(start+(end-start)/2);
				if(matrix[i][mid]==target)
					return true;
				else if(matrix[i][end]>target)
					end=mid-1;
				else if(matrix[i][mid]<target)
					start=mid+1;
			}
		}
	return false;
}
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int row,column;
    cin>>row>>column;
    int target;
    cin>>target;
    vector<vector<int>>matrix(row);
    for(int i=0;i<row;i++)
    {
    	matrix[i].assign(column,0);
    	for(int j=0;j<column;j++)
    		cin>>matrix[i][j];
    }
    if(searchmatrix(matrix,target)==true)
    	cout<<"TRUE";
    else
    	cout<<"FALSE";


	return 0;
}