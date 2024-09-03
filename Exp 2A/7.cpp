#include<iostream>
using namespace std;
int main()
{
    float t;
    cout<<"Enter Temperature in Celcius: ";
    cin>>t;
    t=(t*1.8)+32;
    cout<<"Temperature in Fahrenheit="<<t<<"F"<<endl;
    return 0;
}
