#include <iostream>
using namespace std;
int main()
{
    int age;
    float height;
    char name[20], gender[10],city[30];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your gender: ";
    cin>>gender;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your height: ";
    cin>>height;
    cout<<"Enter your city: ";
    cin>>city;
    cout<<"Your name is "<<name<<endl;
    cout<<"Your age is "<<age<<endl;
    cout<<"Your gender is "<<gender<<endl;
    cout<<"Your height is "<<height<<endl;
    cout<<"Your city  is "<<city<<endl;
    return 0;
}
