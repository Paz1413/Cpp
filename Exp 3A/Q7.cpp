#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"Enter 1 for Addition "<<endl;
    cout<<"Enter 2 for Substraction "<<endl;
    cout<<"Enter 3 for Division "<<endl;
    cout<<"Enter 4 for Multiplication "<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
            int sum,a1,b1;
            cout<<"Enter a: ";
            cin>>a1;
            cout<<"Enter b: ";
            cin>>b1;
            sum=a1+b1;
            cout<<"Addition is "<<sum;
            break;
        case 2:
            int diff,a2,b2;
            cout<<"Enter a: ";
            cin>>a2;
            cout<<"Enter b: ";
            cin>>b2;
            diff=a2-b2;
            cout<<"Substraction is "<<diff;
            break;
        case 3:
            float Div,a3,b3;
            cout<<"Enter a: ";
            cin>>a3;
            cout<<"Enter b: ";
            cin>>b3;
            Div=a3/b3;
            cout<<"Division is "<<Div;
            break;
        case 4:
            int mul,a4,b4;
            cout<<"Enter a: ";
            cin>>a4;
            cout<<"Enter b: ";
            cin>>b4;
            mul=a4*b4;
            cout<<"Multiplication is "<<mul;
            break;
        default:
            cout<<"Invalid Input";
            break;
    }
    return 0;
}
