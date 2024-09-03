#include<iostream>
using namespace std;
int main()
{
    int a, b, c, SLN=0;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    if((a>b && b>c)||(c>b && b>a))
    {
        SLN=b;
    }
    else if((b>a && a>c)||(c>a && a>b))
    {
        SLN=a;
    }
    else if((a>c && c>b)||(b>c && c>a))
    {
        SLN=c;
    }
    if(SLN==0)
    {
        cout<<"Two or more no. may be equal";
    }
    else
    {
        cout<<"Second Largest No.: "<<SLN;
    }
    return 0;
}
