#include<iostream>
#include<string>
#include<cstdlib>
#include<chrono>
#include<iomanip>
#include<random>
#include<ctime>
using namespace std;
using namespace chrono;

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

void insertion_sort_int(int size)
{
	cout << "<< insertion sort (int) " << size << "�����ո�� >>" << endl;

	//�H���ͦ��Ʀr�}�C
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<>dist(1,2000000000);
	
	int *array=new int[size];
	for (int i=0;i<size;i++)
	{
		array[i]=dist(gen);
	}
	
	// cout << "�H���ͦ����}�C:";
	// PrintArray(array,size);

	//�}�l�Ƨ�
	double time;
	if(size<100)
	{
		for(int i=0;i<1000000;i++)
		{
			auto start=system_clock::now();

			InsertionSort(array,size);

			auto end=system_clock::now();
			auto duration=duration_cast<microseconds>(end-start);
			double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //���:��
			time+=temp;
		}

		// cout << "�Ƨǧ������}�C:";
    	// PrintArray(array,size);

		cout << "�ƧǪ�O�ɶ�:";
		cout << fixed << setprecision(100) << time/1000000 << "��" << endl;
    	delete [] array;
	}
	else
	{
		auto start=system_clock::now();

		InsertionSort(array,size);

		auto end=system_clock::now();
		auto duration=duration_cast<microseconds>(end-start);
		double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //���:��
		time=temp;

		// cout << "�Ƨǧ������}�C:";
    	// PrintArray(array,size);

		cout << "�ƧǪ�O�ɶ�:";
		cout << fixed << setprecision(100) << time << "��" << endl;
    	delete [] array;
	}
}

void insertion_sort_long(int size)
{
	cout << "<< insertion sort (long) " << size << "�����ո�� >>" << endl;
	
	//�H���ͦ��Ʀr�}�C
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<long long>dist(1000000000,9000000000); 
	
	long long *array=new long long[size];
	for (int i=0;i<size;i++)
	{
		array[i]=dist(gen);
	}
	
	// cout << "�H���ͦ����}�C:";
	// PrintArray(array,size);

	//�}�l�Ƨ�
	double time;
	if(size<100)
	{
		for(int i=0;i<1000000;i++)
		{
			auto start=system_clock::now();

			InsertionSort(array,size);

			auto end=system_clock::now();
			auto duration=duration_cast<microseconds>(end-start);
			double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //���:��
			time+=temp;
		}

		// cout << "�Ƨǧ������}�C:";
    	// PrintArray(array,size);

		cout << "�ƧǪ�O�ɶ�:";
		cout << fixed << setprecision(100) << time/1000000 << "��" << endl;
    	delete [] array;
	}
	else
	{
		auto start=system_clock::now();

		InsertionSort(array,size);

		auto end=system_clock::now();
		auto duration=duration_cast<microseconds>(end-start);
		double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //���:��
		time=temp;

		// cout << "�Ƨǧ������}�C:";
    	// PrintArray(array,size);

		cout << "�ƧǪ�O�ɶ�:";
		cout << fixed << setprecision(100) << time << "��" << endl;
    	delete [] array;
	}
}

void insertion_sort_float(int size)
{
	cout << "<< insertion sort (float) " << size << "�����ո�� >>" << endl;
	
	//�H���ͦ��Ʀr�}�C
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<float>dist(1,10000);
	
	float *array=new float[size];
	for (int i=0;i<size;i++)
	{
		array[i]=dist(gen);
	}
	
	// cout << "�H���ͦ����}�C:";
	// PrintArray(array,size);

	//�}�l�Ƨ�
	double time;
	if(size<100)
	{
		for(int i=0;i<1000000;i++)
		{
			auto start=system_clock::now();

			InsertionSort(array,size);

			auto end=system_clock::now();
			auto duration=duration_cast<microseconds>(end-start);
			double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //���:��
			time+=temp;
		}

		// cout << "�Ƨǧ������}�C:";
    	// PrintArray(array,size);

		cout << "�ƧǪ�O�ɶ�:";
		cout << fixed << setprecision(100) << time/1000000 << "��" << endl;
    	delete [] array;
	}
	else
	{
		auto start=system_clock::now();

		InsertionSort(array,size);

		auto end=system_clock::now();
		auto duration=duration_cast<microseconds>(end-start);
		double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //���:��
		time=temp;

		// cout << "�Ƨǧ������}�C:";
    	// PrintArray(array,size);

		cout << "�ƧǪ�O�ɶ�:";
		cout << fixed << setprecision(100) << time << "��" << endl;
    	delete [] array;
	}
}

void insertion_sort_double(int size)
{
	cout << "<< insertion sort (double) " << size << "�����ո�� >>" << endl;
	
	//�H���ͦ��Ʀr�}�C
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<double>dist(1,10000);
	
	double *array=new double[size];
	for (int i=0;i<size;i++)
	{
		array[i]=dist(gen);
	}
	
	// cout << "�H���ͦ����}�C:";
	// PrintArray(array,size);

	//�}�l�Ƨ�
	double time;
	if(size<100)
	{
		for(int i=0;i<1000000;i++)
		{
			auto start=system_clock::now();

			InsertionSort(array,size);

			auto end=system_clock::now();
			auto duration=duration_cast<microseconds>(end-start);
			double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //���:��
			time+=temp;
		}

		// cout << "�Ƨǧ������}�C:";
    	// PrintArray(array,size);

		cout << "�ƧǪ�O�ɶ�:";
		cout << fixed << setprecision(100) << time/1000000 << "��" << endl;
    	delete [] array;
	}
	else
	{
		auto start=system_clock::now();

		InsertionSort(array,size);

		auto end=system_clock::now();
		auto duration=duration_cast<microseconds>(end-start);
		double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //���:��
		time=temp;

		// cout << "�Ƨǧ������}�C:";
    	// PrintArray(array,size);

		cout << "�ƧǪ�O�ɶ�:";
		cout << fixed << setprecision(100) << time << "��" << endl;
    	delete [] array;
	}
}

void insertion_sort_string(int size)
{
	cout << "<< insertion sort (string) " << size << "�����ո�� >>" << endl;

	//�H���ͦ��Ʀr�}�C
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

	// cout << "�H���ͦ����}�C:";
	// PrintArray(array,size);

	//�}�l�Ƨ�
	auto start=system_clock::now();
	
	InsertionSort(array,size);
	
	auto end=system_clock::now();
	auto duration=duration_cast<microseconds>(end-start);
	double time=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //���:��

	// cout << "�Ƨǧ������}�C:";
    // PrintArray(array,size);

	cout << "�ƧǪ�O�ɶ�:";
	cout << fixed << setprecision(100) << time << "��" << endl;
	delete [] array;
}

/*int main()
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
	// insertion_sort_string(10);
    // insertion_sort_string(20);
    // insertion_sort_string(30);
    // insertion_sort_string(40);
    // insertion_sort_string(50);
    // insertion_sort_string(60);
    // insertion_sort_string(100000);
    // insertion_sort_string(200000);
    // insertion_sort_string(300000);
    // insertion_sort_string(400000);
    // insertion_sort_string(500000);
	return 0;
}*/