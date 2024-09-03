#include<iostream>
using namespace std;
int main()
{
    for(int i =65; i<=122; i++)
    {
        if(i>90 && i<97)
        {
            continue;
        }
        else
        {
            cout<<char(i);
        }
    }
    return 0;
}
