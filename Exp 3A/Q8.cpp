#include<iostream>
using namespace std;
int main()
{
    cout << "Uppercase and lowercase letters:\n";

    for (char ch = 'A'; ch <= 'z'; ++ch)
    {
        if (ch > 'Z' && ch < 'a')
        {
            continue;
        }
        cout << ch << ' ';
    }

    cout <<endl;

    return 0;
}
