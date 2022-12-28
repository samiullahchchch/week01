#include <iostream>
using namespace std;
int main()
 {
string name;
int s1;
int s2;
int s3;
int s4;
int s5;
float output;
int total;
cout<<"Enter your name: "<<endl;
cin>>name;
cout<<"Enter your marks of PHY subject: "<<endl; 
cin>>s1;
cout<<"Enter your marks of CHEMISTRY subject: "<<endl;
cin>>s2;
cout<<"Enter your marks of Urdu subject: "<<endl;
cin>>s3;
cout<<"Enter your marks of bio subject: "<<endl;
cin>>s4;
cout<<"Enter your marks of Math subject: "<<endl;
cin>>s5;
total = (s1 + s2 + s3 + s4 + s5);
output = (total*100)/500;
cout<<"Your percentage is: "<<endl;
cout<<output;

}