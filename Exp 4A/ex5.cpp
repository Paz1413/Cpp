#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, p, temp, count=0, r,  s=0;
    cout<<"Check Armstrong: "<<endl;
    cout<<"Enter n: ";
    cin>>n;
    temp=n;
    p = n;
    while(temp>0)
    {
        temp/=10;
        count++;
    }
    for(int i = 0; i<count; i++)
    {
        r=n%10;
        s+=pow(r, count);
        n/=10;
    }
    if(p == s)
    {
        cout<<p<<" is an Armstrong number";
    }
    else
    {
        cout<<p<<" is not an armstrong number";
    }

    return 0;
}

