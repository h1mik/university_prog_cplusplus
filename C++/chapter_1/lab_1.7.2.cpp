#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main(){
float a,b;
cout<<"Enter the first num.";
cin>>a;
cout<<"Enter the secund num.";
cin>>b;
if (1/b==1/a){
    cout<<"The nubbers: "<<a<<" and "<<b<<" are equal (by 0.000001 epsilon)";
}
else{
    cout<<"The nubbers: "<<a<<" and "<<b<<" are NOT equal (by 0.000001 epsilon)";
}




}