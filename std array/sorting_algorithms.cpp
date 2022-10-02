#include<iostream>
#include<array>
using namespace std;

// print_array
template <class T>
void PrintArray(T &arr, int size)
{
    for (int i=0;i<size;i++)
	{
        cout << arr[i] << " ";
    }
    cout << endl;
}

// insertion_sort
template <class T>
void InsertionSort(T &arr, int size) 
{
    int i,j;
    for(i=1;i<size;i++)
    {
        j=i;
        auto temp=arr[i];
        while(j>0&&temp<arr[j-1])
        {
           arr[j]=arr[j-1];
           j--;
        }
        arr[j]=temp;
    }
}

// selection_sort
template <class T>
void SelectionSort(T &arr,int size)
{
	for(int i=0;i<size;i++)
    {
		for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
				auto temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

// bubble_sort
template <class T>
void BubbleSort(T &arr,int size)
{
	for(int i=size-1;i>0;i--)
	{
    	for(int j=0;j<=i-1;j++)
    	{
        	if(arr[j]>arr[j+1])
        	{
				auto temp=arr[j];
            	arr[j]=arr[j+1];
            	arr[j+1]=temp;
        	}
    	}
	}
}

