#include<iostream>
#include<array>
#include<typeinfo>
using namespace std;

// merge_sort
template <class T, class U>
void Merge(T &arr,U &L,int leftCount,U &R,int rightCount)
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

template <class T, class U>
void MergeSort(T &arr,int size,U &typ)
{
	if(size<2)
	{
		return;
	}
    
    // typeid().name
    
    // if((typeid(arr[0]).name())==(typeid(0).name()))
    // {
    //     array<int,1000000> L;
    //     array<int,1000000> R;
    // }
    
    array<U,1000000> L;
    array<U,1000000> R;
	
	int mid=size/2;

	for(int i=0;i<mid;i++)
	{
		L[i]=arr[i];
	}
	
	for(int i=mid;i<size;i++)
	{
		R[i-mid]=arr[i];
	}
	
	MergeSort(L,mid,L[0]);
	MergeSort(R,size-mid,R[0]);
	Merge(arr,L,mid,R,size-mid);
}

int main()
{
    // array<int,5> array={1,5,4,3,2};
    array<string,5> array={"e","a","c","b","d"};
    
    // cout << typeid(typeid(array[0]).name()).name() << endl;
    
    MergeSort(array,5,array[0]);
    for(int i=0;i<5;i++)
    {
        cout << array[i] << endl;
    }
    return 0;
}