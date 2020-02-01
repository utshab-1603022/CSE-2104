///Euler's Series : y = e^-x

#include<bits/stdc++.h>
using namespace std;

float euler(float x,float y)
{
    return -y;
}
int main()
{
    float x,y,h,a,k;
    cout<<"What are the initial Values?\nx = ";
    cin>>x;
    cout<<"y = ";
    cin>>y;
    cout<<"\nEnter x for y(x): ";
    cin>>a;
    cout<<"Enter h: ";
    cin>>h;

    cout<<"\n\tx\t|\ty\n";
    while(x<a)
    {
        k=h*euler(x,y);
        y=y+k;
        x=x+h;
        cout<<"\t"<<x<<"\t|\t"<<y<<endl;
    }
    return 0;
}


