#include <iostream>
using namespace std;
int main() {
float v;
float a;
int t;
float fn;
cout <<"    Enter intial velocity:"<<endl;
cin>>v;
cout <<" Enter accleration:  "<<endl;
cin>>a;
cout <<" Time:  "<<endl;
cin>>t;

fn = (a*t) + t;
cout<<"Final velocity is: "<<endl;
cout<<fn;

}