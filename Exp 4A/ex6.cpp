#include<iostream>
using namespace std;
int main()
{
    int n, rev=0, r, dig, p, count = 0;
    cout<<"Check Palindrome: "<<endl;
    cout<<"Enter n: ";
    cin>>n;

    p=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    cout<<"rev is: "<<rev<<endl;
    if(p == rev)
    {
        cout<<p<<" is a palindrome number";
    }
    else
    {
        cout<<p<<" is not a palindrome number";
    }

    return 0;
}
