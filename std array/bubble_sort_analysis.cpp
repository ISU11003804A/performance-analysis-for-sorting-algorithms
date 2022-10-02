#include<iostream>
#include<string>
#include<cstdlib>
#include<chrono>
#include<iomanip>
#include<random>
#include<ctime>
#include<array>
using namespace std;
using namespace chrono;

void bubble_sort_int(int size)
{
	cout << "<< bubble sort (int) " << size << "筆測試資料 >>" << endl;

	//隨機生成數字陣列
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<>dist(1,2000000000);
	
    array<int,1000000> array;
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

			BubbleSort(array,size);

			auto end=system_clock::now();
			auto duration=duration_cast<microseconds>(end-start);
			double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒
			time+=temp;
		}

		// cout << "排序完成的陣列:";
    	// PrintArray(array,size);

		cout << "排序花費時間:";
		cout << fixed << setprecision(100) << time/1000000 << "秒" << endl;
	}
	else
	{
		auto start=system_clock::now();

		BubbleSort(array,size);

		auto end=system_clock::now();
		auto duration=duration_cast<microseconds>(end-start);
		double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒
		time=temp;

		// cout << "排序完成的陣列:";
    	// PrintArray(array,size);

		cout << "排序花費時間:";
		cout << fixed << setprecision(100) << time << "秒" << endl;
	}
}

void bubble_sort_long(int size)
{
	cout << "<< bubble sort (long) " << size << "筆測試資料 >>" << endl;
	
	//隨機生成數字陣列
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<long long>dist(1000000000,9000000000); 
	
	array<long,1000000> array;
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

			BubbleSort(array,size);

			auto end=system_clock::now();
			auto duration=duration_cast<microseconds>(end-start);
			double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒
			time+=temp;
		}

		// cout << "排序完成的陣列:";
    	// PrintArray(array,size);

		cout << "排序花費時間:";
		cout << fixed << setprecision(100) << time/1000000 << "秒" << endl;
	}
	else
	{
		auto start=system_clock::now();

		BubbleSort(array,size);

		auto end=system_clock::now();
		auto duration=duration_cast<microseconds>(end-start);
		double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒
		time=temp;

		// cout << "排序完成的陣列:";
    	// PrintArray(array,size);

		cout << "排序花費時間:";
		cout << fixed << setprecision(100) << time << "秒" << endl;
	}
}

void bubble_sort_float(int size)
{
	cout << "<< bubble sort (float) " << size << "筆測試資料 >>" << endl;
	
	//隨機生成數字陣列
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<float>dist(1,10000);
	
	array<float,1000000> array;
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

			BubbleSort(array,size);

			auto end=system_clock::now();
			auto duration=duration_cast<microseconds>(end-start);
			double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒
			time+=temp;
		}

		// cout << "排序完成的陣列:";
    	// PrintArray(array,size);

		cout << "排序花費時間:";
		cout << fixed << setprecision(100) << time/1000000 << "秒" << endl;
	}
	else
	{
		auto start=system_clock::now();

		BubbleSort(array,size);

		auto end=system_clock::now();
		auto duration=duration_cast<microseconds>(end-start);
		double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒
		time=temp;

		// cout << "排序完成的陣列:";
    	// PrintArray(array,size);

		cout << "排序花費時間:";
		cout << fixed << setprecision(100) << time << "秒" << endl;
	}
}

void bubble_sort_double(int size)
{
	cout << "<< bubble sort (double) " << size << "筆測試資料 >>" << endl;
	
	//隨機生成數字陣列
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<double>dist(1,10000);
	
	array<double,1000000> array;
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

			BubbleSort(array,size);

			auto end=system_clock::now();
			auto duration=duration_cast<microseconds>(end-start);
			double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒
			time+=temp;
		}

		// cout << "排序完成的陣列:";
    	// PrintArray(array,size);

		cout << "排序花費時間:";
		cout << fixed << setprecision(100) << time/1000000 << "秒" << endl;
	}
	else
	{
		auto start=system_clock::now();

		BubbleSort(array,size);

		auto end=system_clock::now();
		auto duration=duration_cast<microseconds>(end-start);
		double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒
		time=temp;

		// cout << "排序完成的陣列:";
    	// PrintArray(array,size);

		cout << "排序花費時間:";
		cout << fixed << setprecision(100) << time << "秒" << endl;
	}
}

void bubble_sort_string(int size)
{
	cout << "<< bubble sort (string) " << size << "筆測試資料 >>" << endl;
	
	//隨機生成數字陣列
    srand(time(NULL));
	string alphabet="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	array<string,1000000> array;
	for(int i=0;i<size;i++)
    {
        string str;
        for(int j=0;j<6;j++)
        {
            
            string s(1,alphabet[rand()%alphabet.size()]) ;
            str.append(s);
        }
        array[i]=str;
    }

	// cout << "隨機生成的陣列:";
	// PrintArray(array,size);

	//開始排序
	auto start=system_clock::now();
	
	BubbleSort(array,size);
	
	auto end=system_clock::now();
	auto duration=duration_cast<microseconds>(end-start);
	double time=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //單位:秒

	// cout << "排序完成的陣列:";
    // PrintArray(array,size);

	cout << "排序花費時間:";
	cout << fixed << setprecision(100) << time << "秒" << endl;
}
