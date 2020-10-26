#include <iostream>
#include <iomanip>
#include <string>
using namespace std; 
int main()
{
    int temp_value;
    int year, day, month;
    cin>>day;
    cin>>month;
    cin>>year;
    month=month-2;
    if(month<0){
        month=month+12;
        year=year-1;
    }
    else{
    goto metka1;
    }
    
metka1:
month=(month*83)/32;
month=month+day;
month=month+year;
month=month+(year/4);
month=month-(year/100);
month=month+(year/400);
month=month%7;
if(month==0){
    cout<<"sun";
}
if(month==1){
    cout<<"mon";
}
if(month==2){
    cout<<"Tue";
}
if(month==3){
    cout<<"Wed";
}
if(month==4){
    cout<<"Thu";
}
if(month==5){
    cout<<"Fri";
}
if(month==6){
    cout<<"Sat";
}


return 0;
}