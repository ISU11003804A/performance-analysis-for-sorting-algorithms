#include<iostream>
#include<string>
#include<cstdlib>
#include<chrono>
#include<iomanip>
#include<random>
#include<ctime>
using namespace std;
using namespace chrono;

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
	double time;
	if(size<100)
	{
		for(int i=0;i<1000000;i++)
		{
			auto start=system_clock::now();

			InsertionSort(array,size);

			auto end=system_clock::now();
			auto duration=duration_cast<microseconds>(end-start);
			double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒
			time+=temp;
		}

		// cout << "排序完成的陣列:";
    		// PrintArray(array,size);

		cout << "排序花費時間:";
		cout << fixed << setprecision(100) << time/1000000 << "秒" << endl;
    		delete [] array;
	}
	else
	{
		auto start=system_clock::now();

		InsertionSort(array,size);

		auto end=system_clock::now();
		auto duration=duration_cast<microseconds>(end-start);
		double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒
		time=temp;

		// cout << "排序完成的陣列:";
    		// PrintArray(array,size);

		cout << "排序花費時間:";
		cout << fixed << setprecision(100) << time << "秒" << endl;
    		delete [] array;
	}
}

void insertion_sort_long(int size)
{
	cout << "<< insertion sort (long) " << size << "筆測試資料 >>" << endl;
	
	//隨機生成數字陣列
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<long long>dist(1000000000,9000000000); 
	
	long long *array=new long long[size];
	for (int i=0;i<size;i++)
	{
		array[i]=dist(gen);
	}
	
	// cout << "隨機生成的陣列:";
	// PrintArray(array,size);

	//開始排序
	double time;
	if(size<100)
	{
		for(int i=0;i<1000000;i++)
		{
			auto start=system_clock::now();

			InsertionSort(array,size);

			auto end=system_clock::now();
			auto duration=duration_cast<microseconds>(end-start);
			double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒
			time+=temp;
		}

		// cout << "排序完成的陣列:";
    		// PrintArray(array,size);

		cout << "排序花費時間:";
		cout << fixed << setprecision(100) << time/1000000 << "秒" << endl;
    		delete [] array;
	}
	else
	{
		auto start=system_clock::now();

		InsertionSort(array,size);

		auto end=system_clock::now();
		auto duration=duration_cast<microseconds>(end-start);
		double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒
		time=temp;

		// cout << "排序完成的陣列:";
    		// PrintArray(array,size);

		cout << "排序花費時間:";
		cout << fixed << setprecision(100) << time << "秒" << endl;
		delete [] array;
	}
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
	double time;
	if(size<100)
	{
		for(int i=0;i<1000000;i++)
		{
			auto start=system_clock::now();

			InsertionSort(array,size);

			auto end=system_clock::now();
			auto duration=duration_cast<microseconds>(end-start);
			double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒
			time+=temp;
		}

		// cout << "排序完成的陣列:";
    		// PrintArray(array,size);

		cout << "排序花費時間:";
		cout << fixed << setprecision(100) << time/1000000 << "秒" << endl;
    		delete [] array;
	}
	else
	{
		auto start=system_clock::now();

		InsertionSort(array,size);

		auto end=system_clock::now();
		auto duration=duration_cast<microseconds>(end-start);
		double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒
		time=temp;

		// cout << "排序完成的陣列:";
    		// PrintArray(array,size);

		cout << "排序花費時間:";
		cout << fixed << setprecision(100) << time << "秒" << endl;
    		delete [] array;
	}
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
	double time;
	if(size<100)
	{
		for(int i=0;i<1000000;i++)
		{
			auto start=system_clock::now();

			InsertionSort(array,size);

			auto end=system_clock::now();
			auto duration=duration_cast<microseconds>(end-start);
			double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒
			time+=temp;
		}

		// cout << "排序完成的陣列:";
    		// PrintArray(array,size);

		cout << "排序花費時間:";
		cout << fixed << setprecision(100) << time/1000000 << "秒" << endl;
    		delete [] array;
	}
	else
	{
		auto start=system_clock::now();

		InsertionSort(array,size);

		auto end=system_clock::now();
		auto duration=duration_cast<microseconds>(end-start);
		double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒
		time=temp;

		// cout << "排序完成的陣列:";
    		// PrintArray(array,size);

		cout << "排序花費時間:";
		cout << fixed << setprecision(100) << time << "秒" << endl;
    		delete [] array;
	}
}

void insertion_sort_string(int size)
{
	cout << "<< insertion sort (string) " << size << "筆測試資料 >>" << endl;

	//隨機生成數字陣列
	srand(time(NULL));
	string alphabet="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	string *array=new string[size];
	for(int i=0;i<size;i++)
    	{
        	for(int j=0;j<6;j++)
        	{
            		char ch=alphabet[rand()%alphabet.size()];
            		array[i].append(1,ch);
        	}
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
