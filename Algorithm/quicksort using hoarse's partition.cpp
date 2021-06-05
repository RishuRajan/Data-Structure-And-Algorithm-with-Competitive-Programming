//quicksort using Hoarse's Partition
#include<bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


class Solution
{
    public:
    void swap(int* x,int* y)
    {
        int temp=*x;
        *x=*y;
        *y=temp;
    }
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high)
        {
            //This below quicksort call for hoarse's partition
            int pos=partition(arr,low,high);
            quickSort(arr,low,pos);
            quickSort(arr,pos+1,high);
        }
    }
    
    int partition (int arr[], int low, int high)
    {
       // Your code here
       //hoarse partition
       int pivot=arr[low];
       int i=(low-1);
       int j=(high+1);
       while(true)
       {
           do{
               i++;
           }while(arr[i]<pivot);
           do{
               j--;
           }while(arr[j]>pivot);
           
           if(i>=j)
             return j;
           swap(&arr[i],&arr[j]);
       }
    }
};

int main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  