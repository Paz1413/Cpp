#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a Character ";
    cin>>ch;  ///  +  - 8
    ch = toupper(ch);
    if('A'<=ch&&ch<='Z')
    {
        //A=65 a=97
        switch(ch)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                cout<<"The Character is Vowel"<<endl;
                break;
            default:
                cout<<"The Character is Consonant";
                break;
        }
    }
    else
    {
        cout<<"The Input is not a Character";
    }
    return 0;
}


// fall through
