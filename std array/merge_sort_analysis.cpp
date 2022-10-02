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

void merge_sort_int(int size)
{
	cout << "<< merge sort (int) " << size << "�����ո�� >>" << endl;

	//�H���ͦ��Ʀr�}�C
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<>dist(1,2000000000);
	
    array<int,1000000> array;
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
		for(int i=0;i<100;i++)
		{
			auto start=system_clock::now();

			MergeSort(array,size,array[0]);

			auto end=system_clock::now();
			auto duration=duration_cast<microseconds>(end-start);
			double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //���:��
			time+=temp;
		}

		// cout << "�Ƨǧ������}�C:";
    	// PrintArray(array,size);

		cout << "�ƧǪ�O�ɶ�:";
		cout << fixed << setprecision(100) << time/100 << "��" << endl;
	}
	else
	{
		auto start=system_clock::now();

		MergeSort(array,size,array[0]);

		auto end=system_clock::now();
		auto duration=duration_cast<microseconds>(end-start);
		double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //���:��
		time=temp;

		// cout << "�Ƨǧ������}�C:";
    	// PrintArray(array,size);

		cout << "�ƧǪ�O�ɶ�:";
		cout << fixed << setprecision(100) << time << "��" << endl;
	}
}

void merge_sort_long(int size)
{
	cout << "<< merge sort (long) " << size << "�����ո�� >>" << endl;
	
	//�H���ͦ��Ʀr�}�C
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<long long>dist(1000000000,9000000000); 
	
	array<long,1000000> array;
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
		for(int i=0;i<100;i++)
		{
			auto start=system_clock::now();

			MergeSort(array,size,array[0]);

			auto end=system_clock::now();
			auto duration=duration_cast<microseconds>(end-start);
			double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //���:��
			time+=temp;
		}

		// cout << "�Ƨǧ������}�C:";
    	// PrintArray(array,size);

		cout << "�ƧǪ�O�ɶ�:";
		cout << fixed << setprecision(100) << time/100 << "��" << endl;
	}
	else
	{
		auto start=system_clock::now();

		MergeSort(array,size,array[0]);

		auto end=system_clock::now();
		auto duration=duration_cast<microseconds>(end-start);
		double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //���:��
		time=temp;

		// cout << "�Ƨǧ������}�C:";
    	// PrintArray(array,size);

		cout << "�ƧǪ�O�ɶ�:";
		cout << fixed << setprecision(100) << time << "��" << endl;
	}
}

void merge_sort_float(int size)
{
	cout << "<< merge sort (float) " << size << "�����ո�� >>" << endl;
	
	//�H���ͦ��Ʀr�}�C
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<float>dist(1,10000);
	
	array<float,1000000> array;
	for (int i=0;i<size;i++)
	{
		array[i]=dist(gen);
	}
	
	cout << "�H���ͦ����}�C:";
	PrintArray(array,size);

	//�}�l�Ƨ�
	double time;
	if(size<100)
	{
		for(int i=0;i<100;i++)
		{
			auto start=system_clock::now();

			MergeSort(array,size,array[0]);

			auto end=system_clock::now();
			auto duration=duration_cast<microseconds>(end-start);
			double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //���:��
			time+=temp;
		}

		cout << "�Ƨǧ������}�C:";
    	PrintArray(array,size);

		cout << "�ƧǪ�O�ɶ�:";
		cout << fixed << setprecision(100) << time/100 << "��" << endl;
	}
	else
	{
		auto start=system_clock::now();

		MergeSort(array,size,array[0]);

		auto end=system_clock::now();
		auto duration=duration_cast<microseconds>(end-start);
		double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //���:��
		time=temp;

		// cout << "�Ƨǧ������}�C:";
    	// PrintArray(array,size);

		cout << "�ƧǪ�O�ɶ�:";
		cout << fixed << setprecision(100) << time << "��" << endl;
	}
}

void merge_sort_double(int size)
{
	cout << "<< merge sort (double) " << size << "�����ո�� >>" << endl;
	
	//�H���ͦ��Ʀr�}�C
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<double>dist(1,10000);
	
	array<double,1000000> array;
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
		for(int i=0;i<100;i++)
		{
			auto start=system_clock::now();

			MergeSort(array,size,array[0]);

			auto end=system_clock::now();
			auto duration=duration_cast<microseconds>(end-start);
			double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //���:��
			time+=temp;
		}

		// cout << "�Ƨǧ������}�C:";
    	// PrintArray(array,size);

		cout << "�ƧǪ�O�ɶ�:";
		cout << fixed << setprecision(100) << time/100 << "��" << endl;
	}
	else
	{
		auto start=system_clock::now();

		MergeSort(array,size,array[0]);

		auto end=system_clock::now();
		auto duration=duration_cast<microseconds>(end-start);
		double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //���:��
		time=temp;

		// cout << "�Ƨǧ������}�C:";
    	// PrintArray(array,size);

		cout << "�ƧǪ�O�ɶ�:";
		cout << fixed << setprecision(100) << time << "��" << endl;
	}
}

void merge_sort_string(int size)
{
	cout << "<< merge sort (string) " << size << "�����ո�� >>" << endl;
	
	//�H���ͦ��Ʀr�}�C
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

	// cout << "�H���ͦ����}�C:";
	// PrintArray(array,size);

	//�}�l�Ƨ�
	auto start=system_clock::now();
	
	MergeSort(array,size,array[0]);
	
	auto end=system_clock::now();
	auto duration=duration_cast<microseconds>(end-start);
	double time=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //���:��

	// cout << "�Ƨǧ������}�C:";
    // PrintArray(array,size);

	cout << "�ƧǪ�O�ɶ�:";
	cout << fixed << setprecision(100) << time << "��" << endl;
}
