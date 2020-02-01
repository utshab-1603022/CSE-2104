#include<bits/stdc++.h>
using namespace std;
#define F(x,y)  1+(y)*(y)

int main()
{

    double y0, x0, y1, n, h, f, k1, k2, k3, k4;
    cout<<"x0 = ";
    cin>>x0;
    cout<<"y0 = ";
    cin>>y0;
    cout<<"h= ";
    cin>>h;
    cout<<"Enter x of y(x) = ";
    cin>>n;
    for (; x0<n; x0=x0+h)
    {
        f = F(x0,y0);
        k1=h*f;
        f = F(x0+h/2,y0+k2/2);
        k2= h*f;
        f = F(x0+h/2,y0+k2/2);
        k3= h*f;
        f = F(x0+h/2,y0+k2/2);
        k4= h*f;
        y1= y0+ (k1+2*k2+2*k3+k4)/6;

        printf ("k1= %lf\n  k2= %lf\n k3= %lf\n k4= %lf\n", k1, k2, k3, k4);
        printf ("\ny(%lf)=%lf", x0+h, y1);
        y0=y1;
    }
}


