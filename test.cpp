#include<iostream>
#include<random>
#include<ctime>
#include<string>
using namespace std;

int main()
{
    
    for(int i=0;i<10;i++)
    {
        cout << random_string() << " " << endl;
    }
    return 0;
}
