/*Given a row wise sorted matrix of size RxC where R and C are always odd, find the median of the matrix.

Example 1:

Input:
R = 3, C = 3
M = [[1, 3, 5], 
     [2, 6, 9], 
     [3, 6, 9]]

Output: 5

Explanation:
Sorting matrix elements gives us 
{1,2,3,3,5,6,6,9,9}. Hence, 5 is median. 
 

Example 2:

Input:
R = 3, C = 1
M = [[1], [2], [3]]
Output: 2

*/

//Naive Appraoch
/*#include<bits/stdc++.h>
using namespace std;
int median(vector<vector<int>>&matrix,int row,int column)
{
     vector<int>res;
     int len=0;
     for(int i=0;i<row;i++)
     {
          for(int j=0;j<column;j++)
               res.push_back(matrix[i][j]);
     }
     sort(res.begin(),res.end());
     len=res.size();
     if(len%2==0)
          return (res[len/2]+res[len/2-1])/2;
     return res[len/2];
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
    int res=median(matrix,row,column);
    cout<<res;
     return 0;
}
*/

//optimized code-o(n*m)

#include<bits/stdc++.h>
using namespace std;

int median(vector<vector<int>>&matrix,int row,int column)
{
     int mini=INT_MAX;
     int maxi=INT_MIN;
     for(int i=0;i<row;i++)
     {
          mini=min(mini,matrix[i][0]);
          maxi=max(maxi,matrix[0][column-1]);
     }
     int desired=(row*column+1)/2;
     while(mini<maxi)
     {
          int mid=mini+(maxi-mini)/2;
          int count=0;
          for(int i=0;i<row;i++)
          {
               for(int j=0;j<column;j++)
               {
                    if(matrix[i][j]<mid)
                         count++;
               }
          }
          if(count<desired)
               mini=mid+1;
          else if(count>desired)
               maxi=mid;
     }
     return mini;
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
    int res=median(matrix,row,column);
    cout<<res;
     return 0;
}