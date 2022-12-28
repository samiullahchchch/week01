#include <iostream>
using namespace std;
int main() {
int d4;
int a1;
int b;
int c2;
int d;
int e3;
int f;
int g4;
int result;
cout<<"ENTER  four digit:    "<<endl;
cin>>d4;
a1 = d4 % 10 ;
b = d4 / 10;
c2 = b % 10;
d = b / 10;
e3 = d % 10;
f =  d / 10;
g4 = f % 10;

result =  a1 + c2 + e3 +g4 ;
cout<<"Anwser is :    "<<endl;
cout<<result;



}