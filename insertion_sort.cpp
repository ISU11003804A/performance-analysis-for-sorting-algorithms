#include<iostream>
#include<string>
using namespace std;

template <class T>
void InsertionSort(T *arr,int size)
{
    for(int i=1;i<size;i++)
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

    InsertionSort(array,6);
    
    cout << "sorted:" << endl;
    PrintArray(array,6);
    return 0;
}
