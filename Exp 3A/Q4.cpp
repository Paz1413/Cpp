#include<iostream>
using namespace std;
int main()
{
    int u;
    cout<<"Enter the amount the units used= ";
    cin>>u;
    if(u>=0)
    {
        int b=100+(u*10);
        if(b<=200)
        {
            cout<<"No Discount!"<<endl<<"The total bill is= "<<b;
        }
        else if(200<b<=500)
        {
            cout<<"Bill Amount= "<<b<<endl;
            float d=0.05*b;
            b=b-d;
            cout<<"Discount= 5% = "<<d<<endl<<"The total bill is= "<<b;
        }
        else if(500<b<=800)
        {
            cout<<"Bill Amount= "<<b<<endl;
            float d=0.1*b;
            b=b-d;
            cout<<"Discount= 10% = "<<d<<endl<<"The total bill is= "<<b;
        }
        else if(800<b<=1100)
        {
            cout<<"Bill Amount= "<<b<<endl;
            float d=0.15*b;
            b=b-d;
            cout<<"Discount= 15% = "<<d<<endl<<"The total bill is= "<<b;
        }
        else
        {
            cout<<"Bill Amount= "<<b<<endl;
            float d=0.20*b;
            b=b-d;
            cout<<"Discount= 20% = "<<d<<endl<<"The total bill is= "<<b;
        }
    }
    else
     {
        cout<<"Wrong Input";
     }
   return 0;
}
