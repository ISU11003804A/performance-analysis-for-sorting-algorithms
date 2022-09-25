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
    
    // for(int i=0;i<11;i++)
    // {
    //     insertion_sort_int(number[i]);
    // }
    // for(int i=0;i<11;i++)
    // {
    //     insertion_sort_long(i);
    // }
    // for(int i=0;i<11;i++)
    // {
    //     insertion_sort_float(i);
    // }
    // for(int i=0;i<11;i++)
    // {
    //     insertion_sort_double(i);
    // }
    // for(int i=0;i<11;i++)
    // {
    //     insertion_sort_string(i);
    // }
    
    merge_sort_int(1000);
    merge_sort_long(1000);
    merge_sort_float(1000);
    merge_sort_double(1000);
    merge_sort_string(1000);
    return 0;
}