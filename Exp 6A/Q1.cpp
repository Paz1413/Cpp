#include<iostream>
using namespace std;
int main()
{
    int a[5], i;
    cout<<"Enter array: ";
    for(i=0; i<=5; i++)
    {
        cin>>a[i];
    }
    cout<<"Array is: ";
    for(i = 0; i<=5; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
