#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    float x,y;
    float pi=3.14159265359;
    
    cout<<"Please, enter a value for x: ";
    cin>>x;

    y=((pow(x,2))/(pow(pi,2)*(pow(x,2)+0.5)))*(1+((pow(x,2))/(pow(pi,2)*pow((pow(x,2)-0.5),2))));

    cout<<"The value of y is: "<<y;

}