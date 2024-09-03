#include<iostream>
using namespace std;
int main()
{
    int n, s=0;
    cout<<"Enter n: ";
    cin>>n;
    do
    {
        s+=n%10;     //sum
                    // s = 6 + 2 + 4 + 1
        n/=10;     //n = 0
    }while(n>0);

    cout<<"Sum: "<<s;
    return 0;
}
