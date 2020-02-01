///False Position
///x^3-2x-5
#include<bits/stdc++.h>
using namespace std;

double f(double x)
{
    return log(x)-2*x+7;
}

int main()
{
    double a = 3,b = 4,x[1001];
    int i;
    cout<<"\tSl no.\t|\ta\t|\tb\t|\tx\t|\tf(x)\n";

    for(i=1,x[0]=0;; i++)
    {
        x[i]=(a*f(b)-b*f(a))/(f(b)-f(a));
        cout<<"\t"<<i<<"\t|\t"<<a<<"\t|\t"<<b<<"\t|\t"<<x[i]<<"\t|\t"<<f(x[i])<<endl;

        if(f(a)*f(i)<0)
        {
            b = x[i];
            if(fabs(x[i]-x[i-1])<0.001)
            {
                cout<<endl<<"Required Root:\t"<<x[i]<<endl;
                break;
            }
        }
        else if(f(a)*f(i)>0)
        {
            a = x[i];
            if(fabs(x[i]-x[i-1])<0.001)
            {
                cout<<endl<<"Required Root:\t"<<x[i]<<endl;
                break;
            }
        }
        else if(f(i)==0)
        {
            cout<<endl<<"Required Root:\t"<<x[i]<<endl;
            break;
        }
    }
}
