#include<iostream>
using namespace std;
int main()
{
    int n,r,s=0;
    cout<<"Enter a four digit number: ";
    cin>>n;
    int c= n;
    if(n>999 && n<10000)
    {
        while(n>0)
        {
            r=n%10;
            s=s+r;
            n= n/10;
        }
    cout<<"Sum of the digits of the number "<<c<<" is "<<s<<endl;
    }
    else cout<<"!!!!!!! INVALID INPUT ¡¡¡¡¡¡¡"<<endl;
    return 0;
}
