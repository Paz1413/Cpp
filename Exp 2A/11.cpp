#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,y,z;
    float a= 0,s;
    cout<<"Enter the value of first side of the triangle: ";
    cin>>x;
    cout<<endl<<"Enter the value of second side of the triangle: ";
    cin>>y;
    cout<<endl<<"Enter the value of third side of the triangle: ";
    cin>>z;

    if(((x+y)>z)|| ((y+z)>x) || ((x+z)>y))
    {
        cout<<"It is a valid Triangle"<<endl;
        s=(x+y+z)/2;
        a=sqrt((s*(s-x)*(s-y)*(s-z)));
        cout<<"Area of the Triangle is "<<a<<endl;
    }
    else
    {
        cout<<"It is not a valid Triangle"<<endl;
    }
    return 0;
}
