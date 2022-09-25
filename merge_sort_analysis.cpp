#include<iostream>
#include<string>
#include<cstdlib>
#include<chrono>
#include<iomanip>
#include<random>
#include<ctime>
using namespace std;
using namespace chrono;

void merge_sort_int(int size)
{
    cout << "<< merge sort (int) " << size << "�����ո�� >>" << endl;

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

			MergeSort(array,size);

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

		MergeSort(array,size);

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

void merge_sort_long(int size)
{
	cout << "<< merge sort (long) " << size << "�����ո�� >>" << endl;

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

			MergeSort(array,size);

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

		MergeSort(array,size);

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

void merge_sort_float(int size)
{
	cout << "<< merge sort (float) " << size << "�����ո�� >>" << endl;
	
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

			MergeSort(array,size);

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

		MergeSort(array,size);

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

void merge_sort_double(int size)
{
	cout << "<< merge sort (double) " << size << "�����ո�� >>" << endl;
	
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

			MergeSort(array,size);

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

		MergeSort(array,size);

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

void merge_sort_string(int size)
{
	cout << "<< merge sort (string) " << size << "�����ո�� >>" << endl;

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
	
	MergeSort(array,size);
	
	auto end=system_clock::now();
	auto duration=duration_cast<microseconds>(end-start);
	double time=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //���:��

	// cout << "�Ƨǧ������}�C:";
    // PrintArray(array,size);

	cout << "�ƧǪ�O�ɶ�:";
	cout << fixed << setprecision(100) << time << "��" << endl;
	delete [] array;
}
