#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float m, ft, in;
    int a;
    cout<<"Выберите метрическую систему: \n0. Mетрическая система\n1. Британская система\n2. Дюймы\n";
    cin>>a;
    if(a==0)
{
    cout<<"Введите метры: ";
    cin>>m;
    cout<<"2"<<(m/2.54)<<" дюймов;\n";
    cout<<(m/12)<<" футов;";
} else  if(a==1)
{
    cout<<"Введите футы: ";
    cin>>ft;
        cout<<(ft*0,3048)<<" метров\n";
    cout<<(ft*12 )<<" дюймов";
}
else  if(a==2)
{
    cout<<"Введите дюймы: ";
    cin>>in;
        cout<<(in*2.54)<<" сантиметров";

} else{
        cout<<"Что то  пошло не так: ";



}


    return 0;
}