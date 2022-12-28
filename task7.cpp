#include <iostream>
using namespace std;
int main() {
string name;
int atp;
int ctp;
float ats;
float cts;
float ptd;
float totala;
float aad;
cout<<" ENTER MOVIE NAME"<<endl;
cin>>name;
cout<<" ENTER adult ticket price"<<endl;
cin>>atp;
cout<<" ENTER MOVIE CHILD TICKET PRICE"<<endl;
cin>>ctp;
cout<<" ENTER  NUMBER OF ADULT TICKETS SOLD"<<endl;
cin>>ats;
cout<<" ENTER NUMBER OF CHILD TICKET SOLD"<<endl;
cin>> cts;
cout<<" ENTER  PERCENTAGE TO DONATE"<<endl;
cin>>ptd; 
totala = (atp*ats)+(ctp*cts);
aad = totala-(totala*0.10);
cout<<" ______________________"<<endl;
cout<<" TOTAL AMOUNT GENRATED:"<<endl;
cout<<totala<<endl;
cout<<" AMOUNT AFTER DONATION:"<<endl;
cout<<aad<<endl;

}
