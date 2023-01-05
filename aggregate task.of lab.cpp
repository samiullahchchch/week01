#include <iostream>
using namespace std;
int main (){
string name;
int Mmarks;
int Imarks;
int emarks;
float aggregate;
float mper;
float iper;
float eper;
cout<<"Enter your name:  "<<endl;
cin>>name;
cout<<"Enter your matric marks:   "<<endl;
cin>>Mmarks;
cout<<"Enter your intermediate marks:  "<<endl;
cin>>Imarks;
cout<<"Enter your Ecat marks: "<<endl;
cin>>emarks;
mper = (Mmarks*100/1100)*0.10;
iper = (Imarks*100/1100)*0.40;
eper = (emarks*100/400)*0.50;
aggregate = mper+iper+eper;
cout<<"Your  aggregate is:  "<<endl;
cout<<aggregate;

}