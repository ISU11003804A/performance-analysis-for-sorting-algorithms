#include<iostream>
#include"sorting_algorithms.cpp"
#include"insertion_sort_analysis.cpp"
using namespace std;

int main()
{
    insertion_sort_int(60);
    insertion_sort_long(60);
    insertion_sort_float(60);
    insertion_sort_double(60);
    insertion_sort_string(60);
    return 0;
}