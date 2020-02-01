///Taylor's Series: y' = x - y^2
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x,y[10],a,sum=0;
    cout<<"What are the initial Values?\nx = ";
    cin>>x;
    cout<<"y = ";
    cin>>y[0];
    cout<<"\nEnter the value for which you want to have the sum: ";
    cin>>a;
    y[1] = x - y[0]*y[0];
    y[2] = 1 - 2*y[0]*y[1];
    y[3] = -2*y[0]*y[2] - 2*y[1]*y[1];
    y[4] = -2*y[0]*y[3] - 6*y[1]*y[2];
    y[5] = -2*y[0]*y[4] - 8*y[1]*y[3] - 6*y[2]*y[2];

    sum = 1 + a*y[1] + a*a/2*y[2] + (pow(a,3))/6*y[3] + (pow(a,4))/24*y[4] + (pow(a,5))/120*y[5];
    cout<<"\n\ty0 = "<<y[0];
    cout<<"\t\ty1 = "<<y[1];
    cout<<"\t\ty2 = "<<y[2];
    cout<<"\t\ty3 = "<<y[3];
    cout<<"\t\ty4 = "<<y[4];
    cout<<"\t\ty5 = "<<y[5];

    cout<<"\n\nResult for y("<<a<<") is: "<<sum;
    cout<<endl;
}
