#include<iostream>
using namespace std;
int main()
{
    float r,p,t,s=0;
    cout<<"Enter Principle amount: ";
    cin>>p;
    cout<<"Enter rate: ";
    cin>>r;
    cout<<"Enter time: ";
    cin>>t;
    s=p*r*t/100;
    cout<<"Simple Interest="<<s<<endl;
    return 0;
}
