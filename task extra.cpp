#include <iostream>
using namespace std;
int main() {
int a;
int b;
cout<<"Enter 5 digit number   "<<endl;
cin>>a;
b = (a%10) + (a/10)%10 + (a/100)%10 + (a/1000) %10 + (a/10000) %10;

cout<<"**************************************"<<endl;

cout<<"Answer is:" <<endl;
cout<<b;



}