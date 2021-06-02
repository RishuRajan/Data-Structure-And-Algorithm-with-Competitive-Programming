//MERGE SORT-It is Divide And Conquer Algorithm.It is stable Algorithm.It is Best Suitd For Linked list
//Time complexity of merge sort is o(nlogn) and space complexity is o(n)
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int start,int mid,int end)
{
    int n1=(mid-start+1);//Initialize the size of 1st Auxilliary Array
    int n2=(end-mid);//Initialize the size of 2nd Auxilliary Array
    
    int left[n1],right[n2];//creation of two subarrays of size n1 and n2 respectively

    for(int i=0;i<n1;i++) //Traversing the left array and copying 1st half of array
        left[i]=arr[start+i];
    for(int j=0;j<n2;j++)
        right[j]=arr[mid+1+j];

    int i=0,j=0,k=start;//initializing initial index for 1st subarray, for 2nd subarray and for merged subarray

    while(i<n1 && j<n2)//we compairing both left and right auxilliary array and if we get smaller element then we put that element first in original array so that we get sorted required array
    {
        if(left[i]<=right[j])
            arr[k++]=left[i++];
        else
            arr[k++]=right[j++];
    }

    while(i<n1)//This is Basically if 1st Auxilliary array becomes empty then we copy all remaining elements of array to original array
        arr[k++]=left[i++];

    while(j<n2)//This is Basically if 2nd Auxilliary array becomes empty then we copy all remaining elements of array to original array
        arr[k++]=right[j++];

}
void mergesort(int arr[],int start,int end)
{
    if(end>start)//We have given atleast two elements in given array
    {
        int mid=start+(end-start)/2;//we basically write this to avoid the overflow condition
        mergesort(arr,start,mid);
        mergesort(arr,mid+1,end);
        merge(arr,start,mid,end); //Recursivelly calling merge function mege the two halves of given array      
    }
}
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
int main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int size;
    cin>>size;
    int arr[size+1];
    for(int i=0;i<size;i++)
        cin>>arr[i];
    mergesort(arr,0,size-1);
    print(arr,size);
    return 0;

}