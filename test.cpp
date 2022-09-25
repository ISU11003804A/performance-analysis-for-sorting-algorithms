#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    srand(time(NULL));

    string alphabet="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string array[10];
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<6;j++)
        {
            char ch=alphabet[rand()%alphabet.size()];
            array[i].append(1,ch);
        }
    }
    return 0;
}