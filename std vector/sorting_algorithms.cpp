#include<iostream>
#include<vector>
using namespace std;

// print_array
template <class T>
void PrintArray(vector<T> &arr, int size)
{
    for (int i=0;i<size;i++)
	{
        cout << arr[i] << " ";
    }
    cout << endl;
}

// insertion_sort
template <class T>
void InsertionSort(vector<T> &arr, int size) 
{
    int i,j;
    T temp;
    for(i=1;i<size;i++)
    {
        j=i;
        temp=arr[i];
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
void SelectionSort(vector<T> &arr,int size) 
{
    for(int i=0;i<size;i++)
    {
        int temp=i;
        for(int j=i;j<size;j++)
        {
            if(arr[temp]>arr[j])
            {
                temp=j;
            }
        }
        if(temp!=i)
        {
            swap(arr[i],arr[temp]);
        }
    }
}

// bubble_sort
template <class T>
void BubbleSort(vector<T> &arr,int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
    }
}

// merge_sort
template <class T>
void Merge(vector<T> &arr,vector<T> &left,int leftCount,vector<T> &right,int rightCount)
{

    int i,j,k;

    i=0;
    j=0;
    k=0;

    while (j<leftCount&&k<rightCount) 
    {
        if (left[j]<right[k])
        {
            arr[i]=left[j];
            j++;
        }
        else
        {
            arr[i]=right[k];
            k++;
        }
        i++;
    }
    while (j<leftCount)
    {
        arr[i]=left[j];
        i++;
        j++;
    }
    while (k<rightCount)
    {
        arr[i]=right[k];
        i++;
        k++;
    }
}

template <class T>
void MergeSort(vector<T> &arr,int size)
{
    int mid;
    if(size<2)
    {
        return;
    }

    mid=size/2;

    vector<T> left;
    vector<T> right;

    for(int i=0;i<mid;i++)
    {
        left.push_back(arr[i]);
    }

    for(int i=0;i<size-mid;i++)
    {
        right.push_back(arr[mid+i]);
    }
    
    MergeSort(left,mid);
    MergeSort(right,size-mid);
    Merge(arr,left,mid,right,size-mid);
}
