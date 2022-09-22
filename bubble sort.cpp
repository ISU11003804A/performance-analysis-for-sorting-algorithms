#include<iostream>
#include<string>
using namespace std;

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
    
    BubbleSort(array,6);
    
    cout << "sorted:" << endl;
    PrintArray(array,6);
    return 0;
}
