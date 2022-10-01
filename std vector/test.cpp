#include<iostream>
#include<vector>
#include<random>
using namespace std;

int main()
{
    vector<string> array;
    for(int i=0;i<10;i++)
    {
        string alphabet="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string str;
        random_device rd;
	    mt19937 gen(rd());
	    uniform_int_distribution<>dist(1,26);
        for(int j=0;j<6;j++)
        {
            string s(1,alphabet[dist(gen)]);
            str.append(s);
        }
        array.push_back(str);
    }
    return 0;
}