#include<iostream>
#include<string>
#include<cstdlib>
#include<chrono>
#include<iomanip>
#include<random>
using namespace std;
using namespace chrono;

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

void insertion_sort_int(int size)
{
	cout << "<< insertion sort (int) " << size << "筆測試資料 >>" << endl;
	
	//隨機生成數字陣列
	
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<>dist(1,2000000000);
	
	int *array=new int[size];
	for (int i=0;i<size;i++)
	{
		array[i]=dist(gen);
	}
	
	// cout << "隨機生成的陣列:";
	// PrintArray(array,size);

	//開始排序
	auto start=system_clock::now();
	
	InsertionSort(array,size);
	
	auto end=system_clock::now();
	auto duration=duration_cast<microseconds>(end-start);
	double time=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒

	// cout << "排序完成的陣列:";
    // PrintArray(array,size);

    cout << "排序花費時間:";
	cout << fixed << setprecision(100) << time << "秒" << endl;
    delete [] array;
}

void insertion_sort_long(int size)
{
	cout << "<< insertion sort (long) " << size << "筆測試資料 >>" << endl;
	
	//隨機生成數字陣列
	
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<long long>dist(1,9000000000); 
	
	long long *array=new long long[size];
	for (int i=0;i<size;i++)
	{
		array[i]=dist(gen);
	}
	
	// cout << "隨機生成的陣列:";
	// PrintArray(array,size);

	//開始排序
	auto start=system_clock::now();
	
	InsertionSort(array,size);
	
	auto end=system_clock::now();
	auto duration=duration_cast<microseconds>(end-start);
	double time=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒

	// cout << "排序完成的陣列:";
    // PrintArray(array,size);

    cout << "排序花費時間:";
	cout << fixed << setprecision(100) << time << "秒" << endl;
	delete [] array;
}

void insertion_sort_float(int size)
{
	cout << "<< insertion sort (float) " << size << "筆測試資料 >>" << endl;
	
	//隨機生成數字陣列
	
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<float>dist(1,10000);
	
	float *array=new float[size];
	for (int i=0;i<size;i++)
	{
		array[i]=dist(gen);
	}
	
	// cout << "隨機生成的陣列:";
	// PrintArray(array,size);

	//開始排序
	auto start=system_clock::now();
	
	InsertionSort(array,size);
	
	auto end=system_clock::now();
	auto duration=duration_cast<microseconds>(end-start);
	double time=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒

	// cout << "排序完成的陣列:";
    // PrintArray(array,size);

    cout << "排序花費時間:";
	cout << fixed << setprecision(100) << time << "秒" << endl;
	delete [] array;
}

void insertion_sort_double(int size)
{
	cout << "<< insertion sort (double) " << size << "筆測試資料 >>" << endl;
	
	//隨機生成數字陣列
	
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<double>dist(1,10000);
	
	double *array=new double[size];
	for (int i=0;i<size;i++)
	{
		array[i]=dist(gen);
	}
	
	// cout << "隨機生成的陣列:";
	// PrintArray(array,size);

	//開始排序
	auto start=system_clock::now();
	
	InsertionSort(array,size);
	
	auto end=system_clock::now();
	auto duration=duration_cast<microseconds>(end-start);
	double time=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒

	// cout << "排序完成的陣列:";
    // PrintArray(array,size);

    cout << "排序花費時間:";
	cout << fixed << setprecision(100) << time << "秒" << endl;
	delete [] array;
}


int main()
{
	// insertion_sort_int(10);
	// insertion_sort_int(20);
	// insertion_sort_int(30);
	// insertion_sort_int(40);
	// insertion_sort_int(50);
	// insertion_sort_int(60);
	// insertion_sort_int(100000);
	// insertion_sort_int(200000);
	// insertion_sort_int(300000);
	// insertion_sort_int(400000);
	// insertion_sort_int(500000);
	// insertion_sort_long(10);
	// insertion_sort_long(20);
	// insertion_sort_long(30);
	// insertion_sort_long(40);
	// insertion_sort_long(50);
	// insertion_sort_long(60);
	// insertion_sort_long(100000);
	// insertion_sort_long(200000);
	// insertion_sort_long(300000);
	// insertion_sort_long(400000);
	// insertion_sort_long(500000);
	// insertion_sort_float(10);
	// insertion_sort_float(20);
	// insertion_sort_float(30);
	// insertion_sort_float(40);
	// insertion_sort_float(50);
	// insertion_sort_float(60);
	// insertion_sort_float(100000);
	// insertion_sort_float(200000);
	// insertion_sort_float(300000);
	// insertion_sort_float(400000);
	// insertion_sort_float(500000);
	// insertion_sort_double(10);
	// insertion_sort_double(20);
	// insertion_sort_double(30);
	// insertion_sort_double(40);
	// insertion_sort_double(50);
	// insertion_sort_double(60);
	// insertion_sort_double(100000);
	// insertion_sort_double(200000);
	// insertion_sort_double(300000);
	// insertion_sort_double(400000);
	// insertion_sort_double(500000);
	return 0;
}