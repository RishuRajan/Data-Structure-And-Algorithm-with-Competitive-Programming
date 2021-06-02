//Quick sort is also Divide and conquer Algorithm.This algorithm is more preferable in case of Array
//Time complexity be o(n^2)
#include<bits/stdc++.h>
using namespace std;
//function which return position/index of pivot element
int partition(int arr[],int start,int end)
{
	int pivot=arr[end];//initializing pivot element
	int i=(start-1); //initializing index for smaller element

	for(int j=start;j<=end-1;j++) //traversing array from start to end-1 because last element is pivot element
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[end]);
	return (i+1);
}
void quicksort(int arr[],int start,int high)
{
	if(start<high)//if there will be atleast two element
	{
		int position=partition(arr,start,high);//storing index of pivot element
		quicksort(arr,start,position-1);//applying quick sort to sort 1st part of array
		quicksort(arr,position+1,high);//applying quicksort to sort 2nd part of array
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
    int arr[size];
    for(int i=0;i<size;i++)
    	cin>>arr[i];
    quicksort(arr,0,size-1);
    print(arr,size);
    return 0;
}