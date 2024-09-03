#include<iostream>
using namespace std;
int main()
{
    float price, gst, amt;
    cout<<"Enter price: ";
    cin>>price;
    cout<<"Enter gst: ";
    cin>>gst;
    if(gst>=0 && gst<=28)
    {
        amt =price + price*gst/100;
        cout<<"Price after GST: "<<amt;
    }
    else
    {
        cout<<"Enter proper GST"<<endl;
    }
    return 0;
}
