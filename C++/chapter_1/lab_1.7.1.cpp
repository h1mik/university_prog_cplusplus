#include <iostream>

using namespace std;

int main(void) {
    
float v1,v2,v3,v4,v5;

v1=2.3;
v2=2.3;
v3=2.123456;
v4=2.123456;
v5=2.123456;

cout.precision(2);
cout << v1 << endl;

cout << fixed << v2 << endl;

cout.precision(6);
cout << v3 << endl;

cout.precision(2);
cout << v4 << endl;

cout.precision(0);
cout << v5 << endl;
return 0;
}