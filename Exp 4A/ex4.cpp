#include<iostream>
using namespace std;
int main()
{
    int a=0, b=1, c, n, s=0;
    cout<<"Fibonacci Series: "<<endl;
    cout<<"Enter n: ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i = 2; i<n; i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}

// 0 1 1 2 3 5 8
