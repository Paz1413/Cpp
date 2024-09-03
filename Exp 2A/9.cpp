#include <iostream>
using namespace std;
int main()
{
    int n,d,r=0;
    cout<<"Enter a four digit number: ";
    cin>>n;
    int c=n;
    if(c>999 && c<10000)
    {
        while(c>0)
        {
            d=c%10;
            r=(r*10)+d;
            c/=10;
        }
        cout<<"Reverse of the number "<<n<<" is "<<r<<endl;
    }
    else cout<<"!!!!!!! INVALID INPUT ¡¡¡¡¡¡¡"<<endl;
    return 0;
}
