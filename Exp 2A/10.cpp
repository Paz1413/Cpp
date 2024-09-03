#include <iostream>
using namespace std;
int main()
{
    int a,b,l;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<endl<<"Enter second number: ";
    cin>>b;
    l=(a>b)?a:b;
    cout<<"Largest number is."<<l<<endl;
    return 0;
}
