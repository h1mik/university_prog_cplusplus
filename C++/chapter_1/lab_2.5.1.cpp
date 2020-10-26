#include <iostream>
#include <iomanip>
#include <string>
using namespace std; 
int main()
{
    int temp_value;
    float n1,n2;
    cin>>n1;
    cin>>n2;
    metka2:
    cout<<"Выберите действие:\n 0 - выход;\n 1 - +;\n 2 - -;\n 3 - /;\n 4 - *;\n";
    cin>>temp_value;
    if(temp_value==0){
        cout<<"Error";
        goto vihod;
    }
    if(temp_value==1){
        cout<<"Ваше значение: ";
        cout<<n1+n2;
    }
    if(temp_value==2){
        cout<<"Ваше значение: ";
                cout<<n1-n2;

    }
    if(temp_value==3){
        cout<<"Ваше значение: ";
                cout<<n1/n2;

    }
    if(temp_value==4){
        cout<<"Ваше значение: ";
                cout<<n1*n2;

    }
    if(temp_value>4 || temp_value<0)
    {
                cout<<"Такой опции нету: \n";
                goto metka2;

    }
     vihod:

return 0;
}
