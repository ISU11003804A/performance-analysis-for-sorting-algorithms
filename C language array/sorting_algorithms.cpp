#include<iostream>
using namespace std;

// print_array
template <class T>
void PrintArray(T *arr, int size)
{
    for (int i=0;i<size;i++)
	{
        cout << arr[i] << " ";
    }
    cout << endl;
}

// insertion_sort
template <class T>
void InsertionSort(T *arr,int size)
{
    for (int i=1;i<size;i++)
	{
        T key=arr[i];
        int j=i-1;
        while(key<arr[j]&&j>=0)
		{
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

// selection_sort
template <class T>
void SelectionSort(T *arr,int size)
{
	for(int i=0;i<size;i++)
    {
		for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                T temp;
				temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

// bubble_sort
template <class T>
void BubbleSort(T *arr,int size)
{
	for(int i=size-1;i>0;i--)
	{
    	for(int j=0;j<=i-1;j++)
    	{
        	if(arr[j]>arr[j+1])
        	{
            	T temp;
				temp=arr[j];
            	arr[j]=arr[j+1];
            	arr[j+1]=temp;
        	}
    	}
	}
}

// merge_sort
template <class T>
void Merge(T *arr,T *L,int leftCount,T *R,int rightCount)
{
	int i,j,k;
	
	i=0;
	j=0;
	k=0;

	while((i<leftCount)&&(j<rightCount))
	{
		if(L[i]<R[j])
		{
			arr[k++]=L[i++];
		}
		else
		{
			arr[k++]=R[j++];
		}
	}
	while(i<leftCount)
	{
		arr[k++]=L[i++];
	}
	while(j<rightCount)
	{
		arr[k++]=R[j++];
	}
}

template <class T>
void MergeSort(T *arr,int size)
{
	int mid;
	T *L,*R;
	if(size<2)
	{
		return;
	}
	 
	mid=size/2;

	L=new T[mid];
	R=new T[size-mid];

	for(int i=0;i<mid;i++)
	{
		L[i]=arr[i];
	}
	
	for(int i=mid;i<size;i++)
	{
		R[i-mid]=arr[i];
	}
	
	MergeSort(L,mid);
	MergeSort(R,size-mid);
	Merge(arr,L,mid,R,size-mid);
	
	delete [] L;
	delete [] R;
}
