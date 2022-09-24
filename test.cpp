#include<iostream>
#include<random>
#include<iomanip>
#include<string>
using namespace std;

string random_string()
{
     string str("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

     random_device rd;
     mt19937 generator(rd());

     shuffle(str.begin(), str.end(), generator);

     return str.substr(0, 32);    // assumes 32 < number of characters in str         
}

int main()
{
    
    random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<double>dist(1,10000);

    for(int i=0;i<10;i++)
    {
        cout << random_string() << " " << endl;
    }
    return 0;
}
