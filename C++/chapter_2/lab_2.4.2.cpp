#include<iostream>
using namespace std;
int dec2bin(int num)
{
    int bin = 0, k = 1;

    while (num)
    {
        bin += (num % 2) * k;
        k *= 10;
        num /= 2;
    }

    return bin;
}
int main()
{
    int number;
    cout << "\n";
    cin >>number;
    cout<<dec2bin(number)<<"\n";
    int a = dec2bin(number);
    cout<<a;

    return 0;
}