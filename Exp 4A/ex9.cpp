#include <iostream>
using namespace std;
int main()
{
    int a, b, n1, n2, temp;
    float GCD, LCM;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    n1=a;
    n2=b;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    GCD = a;
    LCM = (n1*n2)/GCD;
    cout << "GCD of " <<n1<< " and " <<n2<< " is " <<GCD<<endl;
    cout << "LCM of " <<n1<< " and " <<n2<< " is " <<LCM<<endl;

    return 0;
}
