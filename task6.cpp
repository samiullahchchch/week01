#include <iostream>
using namespace std;
int main() {
int bags;
float costbag;
float area;
float fpp;
int fapsf;
cout<<"Enter Bag Size in Pounds:"<<endl;
cin>>bags;
cout<<"Enter cost of the bag:"<<endl;
cin>>costbag;
cout<<"Enter area covered by each bag in square feet:"<<endl;
cin>> area;
cout<<"_______________________________________________"<<endl;
fpp = bags/costbag;
fapsf = costbag/area;
cout<<"cost of fertilizer per pound:"<<endl;
cout<<fpp<<endl;

cout<<"cost of fertilizer the area per square feet:"<<endl;
cout<<fapsf;

}