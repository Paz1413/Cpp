#include<iostream>
using namespace std;
int main()
{
    float r,a=0,p=0;
    const float pi=3.14;
    cout<<"Enter radius: ";
    cin>>r;
    a=pi*r*r;
    p=2*pi*r;
    cout<<"Area="<<a<<" cm2"<<endl;
    cout<<"Perimeter= "<<p<<" cm"<<endl;
    return 0;
}
