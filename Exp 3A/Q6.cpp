#include<iostream>
using namespace std;
int main()
{
    int ch;
    cout<<"Enter 1 for triangle "<<endl<<"Enter 2 for circle "<<endl<<"Enter 3 for rectangle "<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        {
            float a1,b1,h1;   //a1, x, y, z, s;
            cout<<"Enter b: ";
            cin>>b1;
            cout<<"Enter h: ";
            cin>>h1;
            a1=0.5*b1*h1;
                               // s = (a+b+c)/2;
                               // a1 = sqrt(s*(s-a)*(s-b)*(s-c));
            cout<<"Area is "<<a1;
            break;
        }

    case 2:
        float a2,r2;
        cout<<"Enter the radius of the circle"<<endl;
        cin>>r2;
        a2=3.14*r2*r2;
        cout<<"Area is "<<a2;
        break;

    case 3:
        float a3,b3,l3;
        cout<<"Enter l: ";
        cin>>l3;
        cout<<"Enter B: ";
        cin>>b3;
        a3=b3*l3;
        cout<<"Area is "<<a3;
        break;
    default:
        cout<<"Invalid Input";
        break;
    }
    return 0;
}
