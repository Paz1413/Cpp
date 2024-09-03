#include<iostream>
using namespace std;
int main()
{
    int m, n, s=0;
    cout<<"Enter m: ";
    cin>>m;
    cout<<"Enter n: ";
    cin>>n;
    for(;m<=n; m++)
    {
        s+=m;   ///s = s+m;
    }
    if (s == 0)
    {
        cout<<"m should be smaller than n";
    }
    else
    {
        cout<<"Sum: "<<s;
    }
    return 0;
}
