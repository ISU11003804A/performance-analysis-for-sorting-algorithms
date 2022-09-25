#include<iostream>
#include"sorting_algorithms.cpp"
#include"insertion_sort_analysis.cpp"
#include"selection_sort_analysis.cpp"
#include"bubble_sort_analysis.cpp"
#include"merge_sort_analysis.cpp"
using namespace std;

int main()
{
    int data_value[11]={10,20,30,40,50,60,100000,200000,300000,400000,500000};

    
    // insertion_sort
    for(int i=0;i<11;i++)
    {
        insertion_sort_int(data_value[i]);
    }
    
    for(int i=0;i<11;i++)
    {
        insertion_sort_long(data_value[i]);
    }

    for(int i=0;i<11;i++)
    {
        insertion_sort_float(data_value[i]);
    }
    
    for(int i=0;i<11;i++)
    {
        insertion_sort_double(data_value[i]);
    }
    
    for(int i=0;i<11;i++)
    {
        insertion_sort_string(data_value[i]);
    }


    // selection_sort
    for(int i=0;i<11;i++)
    {
        selection_sort_int(data_value[i]);
    }

    for(int i=0;i<11;i++)
    {
        selection_sort_long(data_value[i]);
    }

    for(int i=0;i<11;i++)
    {
        selection_sort_float(data_value[i]);
    }

    for(int i=0;i<11;i++)
    {
        selection_sort_double(data_value[i]);
    }

    for(int i=0;i<11;i++)
    {
        selection_sort_string(data_value[i]);
    }


    // bubble_sort
    for(int i=0;i<11;i++)
    {
        bubble_sort_int(data_value[i]);
    }

    for(int i=0;i<11;i++)
    {
        bubble_sort_long(data_value[i]);
    }

    for(int i=0;i<11;i++)
    {
        bubble_sort_float(data_value[i]);
    }

    for(int i=0;i<11;i++)
    {
        bubble_sort_double(data_value[i]);
    }

    for(int i=0;i<11;i++)
    {
        bubble_sort_string(data_value[i]);
    }


    // merge_sort
    for(int i=0;i<11;i++)
    {
        merge_sort_int(data_value[i]);
    }
    
    for(int i=0;i<11;i++)
    {
        merge_sort_long(data_value[i]);
    }

    for(int i=0;i<11;i++)
    {
        merge_sort_float(data_value[i]);
    }

    for(int i=0;i<11;i++)
    {
        merge_sort_double(data_value[i]);
    }

    for(int i=0;i<11;i++)
    {
        merge_sort_string(data_value[i]);
    }
    
    return 0;
}
