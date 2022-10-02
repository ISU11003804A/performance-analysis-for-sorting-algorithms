#include<iostream>
#include<array>
#include<typeinfo>
using namespace std;

// merge_sort
template <class T>
void Merge(T &arr,T &L,int leftCount,T &R,int rightCount)
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
void MergeSort(T &arr,int size)
{
	if(size<2)
	{
		return;
	}
    array<T,1000000> L;
    array<T,1000000> R;
	 
	int mid=size/2;

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
}

int main()
{
    array<int,5> array={1,5,4,3,2};
    // array<string,5> array={"e","a","c","b","d"};
    MergeSort(array,5);
    for(int i=0;i<5;i++)
    {
        cout << array[i] << endl;
    }
    return 0;
    //d
}