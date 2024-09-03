#include<iostream>
using namespace std;
int main()
{
    int x,y,z,a;
    cout<<"Enter value of x: ";
    cin>>x;
    cout<<"Enter value of y: ";
    cin>>y;
    cout<<"Enter value of z: ";
    cin>>z;
    a=x;
    x=y;
    y=z;
    z=a;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<"z="<<z<<endl;
    return 0;
}
