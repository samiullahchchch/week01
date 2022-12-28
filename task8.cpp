#include <iostream>
using namespace std;
int main() {
float vprice;
float mprice;
int vkg;
int fkg;
float vcost;
float fcost;
float total;
float result;
cout<<"VAGETABLE PRICE PER KG:                 "<<endl;
cin>> vprice;
cout<<"FRUIT PRICE PER KG:                 "<<endl;
cin>>mprice;
cout<<"TOTAL KG OF VAGETABLE:                 "<<endl;
cin>>vkg;
cout<<"TOTAL KG OF FRUIT:                 "<<endl;
cin>>fkg;
vcost = vprice*vkg;
fcost = mprice*fkg;
total = vcost + fcost;
result = total/1.94;
cout<<"__________________________________                 "<<endl;
cout<<" THE EARNING OF HARVEST IN RUPEES IS:                 "<<endl;
cout<<result;
}