#include<iostream>
#include<string>
using namespace std;

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
	 
	mid = size/2;

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
	
	delete [] R;
	delete [] L;
}

template <class T>
void PrintArray(T *arr,int size)
{
    for(int i=0;i<size;i++)
	{
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    //int array[6] = {5,3,1,2,6,4};
    //float array[6] = {5.2,3.3,1.3,2.6,6.2,4.1};
    //string array[6] = {"a","e","f","d","b","c"};
    
    cout << "original:" << endl;
    PrintArray(array,6);
    
    MergeSort(array,6);
    
    cout << "sorted:" << endl;
    PrintArray(array,6);
    return 0;
}
