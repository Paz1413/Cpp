#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float r,p,t,n,c=0;
    cout<<"Enter Principle amount: ";
    cin>>p;
    cout<<"Enter rate: ";
    cin>>r;
    cout<<"Enter the time: ";
    cin>>t;
    cout<<"Enter how many time a year it is to be calculated: ";
    cin>>n;
    c= p*(pow((1+r/n),(n*t))) - p;
    cout<<"Compound Interest="<<c<<endl;
    return 0;
}
