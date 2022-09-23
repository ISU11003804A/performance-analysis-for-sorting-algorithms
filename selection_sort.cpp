#include<iostream>
#include<string>
using namespace std;

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
    
    SelectionSort(array,6);
    
    cout << "sorted:" << endl;
    PrintArray(array,6);
    return 0;
}
