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
		for(int i=0;i<1000000;i++)
		{
			auto start=system_clock::now();

			MergeSort(array,size);

			auto end=system_clock::now();
			auto duration=duration_cast<microseconds>(end-start);
			double temp=(double(duration.count()))*microseconds::period::num/microseconds::period::den; //���:��
			time+=temp;
		}

		cout << "�Ƨǧ������}�C:";
    	PrintArray(array,size);

		cout << "�ƧǪ�O�ɶ�:";
		cout << fixed << setprecision(100) << time/1000000 << "��" << endl;
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
	}
}