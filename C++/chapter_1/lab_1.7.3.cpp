#include <iostream>

using namespace std;

int main(void) {
    
int a1,a2,a3,a4;
 cout<<"Введите первое значени: ";
stepone:
cin>>a1;
if(a1>=0 && a1<=255){
   cout<<"Введите второе значени: ";
}
else{
    cout<<"Enter again.\n";
    goto stepone;
}
steptwo:
cin>>a2;
if(a2>=0 && a2<=255){
   cout<<"Введите третье значени: ";
}
else{
    cout<<"Enter again.\n";
    goto steptwo;
}
stepthree:
cin>>a3;
if(a3>=0 && a3<=255){
    cout<<"Введите четвёртое значени: ";
}
else{
    cout<<"Enter again.\n";
    goto stepthree;
}
stepfour:
cin>>a4;
if(a4>=0 && a4<=255){
   
}
else{
    cout<<"Enter again.\n";
    goto stepfour;
}
 cout<<a1<<"."<<a2<<"."<<a3<<"."<<a4<<"";



return 0;
}