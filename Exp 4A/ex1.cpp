#include<iostream>
using namespace std;
int main()
{
    cout<<"1^2 + 2^2 + 3^2 +.... N^2"<<endl;
    int i = 1, n, s=0;
    cout<<"Enter n: ";
    cin>>n;
    while(i<=n) ///for(int i = 1; i<=n; i++)
    {
        s+=i*i;   /// s = s +(i*i)
        i++;
    }

    cout<<"Sum: "<<s;
}
