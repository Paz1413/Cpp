#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    float r1,r2;
    cout<<"equation--> (ax^2+bx+c)"<<endl;
    cout<<"Enter the values: "<<endl;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"c: ";
    cin>>c;
    int d=(b*b)-(4*a*c);
    if(d>0)
    {
        r1=(-b+d)/(2*a);
        r2=(-b-d)/(2*a);
        cout<<"1st Root= "<<r1;
        cout<<endl<<"2nd Root= "<<r2;
    }
    else if(d<0)
    {
        int dd=d*(-1);
        double f=(-b)/(2*a);
        double s=(dd)/(2*a);
        cout<<"1st Root= "<<f<<" + "<<s<<"i"<<endl;
        cout<<"2nd Root= "<<f<<" - "<<s<<"i";
    }
    else
    {
        r1=(-b)/(2*a);
        cout<<"The root is= "<<r1;
    }
    return 0;
}
