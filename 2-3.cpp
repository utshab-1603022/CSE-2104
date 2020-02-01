#include<bits/stdc++.h>
using namespace std;

double func1(double x)
{
    double f;
    f=pow((2.0*x+5.0),1.0/3.0);
    return f;
}
double func2(double x)
{
    double f;
    f=5/pow((x*x-2),-1);
    return f;
}
double func3(double x)
{
    double f;
    f=1/2*(x*x*x-5);
    return f;
}
double func1d(double x)
{
    double f;
    f=1.0/3.0*pow((2.0*x+5.0),-2.0/3.0)*2.0;
    return f;
}
double func2d(double x)
{
    double f;
    f=-5.0*pow((x*x-2.0),-2.0)*2.0*x;
    return f;
}
double func3d(double x)
{
    double f;
    f=1.0/2.0*3.0*x*x;
    return f;
}

int main()
{
    int i;
    double fa1,fa2,fa3,x,x2,a,b,k[1001];

    cout<<"Sl. NO.\t|\tx\t|\tf(x)\n";
    if(func1d(x)<1)
    {
        for(i=1;;i++)
            {
                k[0]=0;
                k[1]=0.75;
                x=func1(k[i]);

                if((fabs(k[i]-k[i-1]))<0.001)
                {
                    break;
                }
                else
                    k[i+1]=func1(k[i]);
                cout<<i<<"\t|\t"<<x<<"\t|\t"<<x2<<endl;
            }
        cout<<"Required root: "<<k[i]<<endl;
    }
}
