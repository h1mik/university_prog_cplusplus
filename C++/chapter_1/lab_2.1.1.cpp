#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number_year;
    cout<<"Enter a value of year: ";
    cin>>number_year;

   if (number_year%4==0) { 
     cout << "It's a leap year." << endl;
 } else if (number_year%200==0) {
     cout << "It's a leap year." << endl;
 }
 else if (number_year%400!=0) {
     cout << "This is an ordinary year." << endl;
 }else { 
    cout << "It's a leap year." << endl;
 }
    return 0;
}