//THIS IS AN ALGORITHM WHICH WE CAN APPLY QUESTION LIKE BELOW
//SORT ARRAY 0'S,1'S AND 2'S

SOURCE CODE-
#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    void DutchNationalFlag(int arr[],int n)
    {
        int start=0;
        int mid=0;
        int end=n-1;
        while(mid<=end)
        {
          if(arr[mid]==0)
          {
            swap(arr[start],arr[mid]);
            start++;
            mid++;
          }
          else if(arr[mid]==1)
               mid++;
          else if(arr[mid]==2)
          {
            swap(arr[mid],arr[end]);
            end--;
          }
        }
     }
 int main()
 {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    solution ob;
    ob.DutchNationalFlag(arr,n);
    for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
    cout<<"\n";
    return 0;
  }  
