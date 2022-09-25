#include<iostream>
#include"sort_algorithms.cpp"
#include"insertion_sort_analysis.cpp"
#include"selection_sort_analysis.cpp"
#include"bubble_sort_analysis.cpp"
#include"merge_sort_analysis.cpp"
using namespace std;

int main()
{
    int number[11]={10,20,30,40,50,60,100000,200000,300000,400000,500000};
    
    merge_sort_int(1000);
    merge_sort_long(1000);
    merge_sort_float(1000);
    merge_sort_double(1000);
    merge_sort_string(1000);
    return 0;
}