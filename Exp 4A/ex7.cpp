#include<iostream>
using namespace std;
int main()
{
    int n, prime = 1;
    cout<<"Check Prime: "<<endl;
    cout<<"Enter n: ";
    cin>>n;
    for(int i = 2; i<n; i++)
    {
        if(n%i!=0)
        {
            continue;
        }
        else
        {
            prime = 0;
            break;
        }
    }
    if(prime== 1)
    {
        cout<<n<<" is a prime number";
    }
    else
    {
        cout<<n<<" is not a prime number";
    }

    return 0;
}
