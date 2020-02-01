///Bisection Method
///x^3-2x-5
#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return x*x*x-2*x-5;
}
int main()
{
   double a=2,b=3,x[1001];int i;
    cout<<"\tSl no.\t|\ta\t|\tb\t|\tx\t|\tf(x)"<<endl<<"--------------------------------------------------------------------------------------"<<endl;
   for(i=1,x[0]=0;;i++)
   {
        x[i]=(a+b)/2;
        cout<<"\t"<<i<<".\t|\t"<<a<<"\t|\t"<<b<<"\t|\t"<<x[i]<<"\t|\t";
        printf("%lf\n",f(x[i]));

        if(f(a)*f(x[i])<0)
            {
                b=x[i];
                if(fabs(x[i]-x[i-1])<0.001)
                {
                    cout<<endl<<"\tRequired Root:\t"<<x[i]<<endl;break;
                }
            }
        else if(f(a)*f(x[i])>0)
            {
                a=x[i];
                if(fabs(x[i]-x[i-1])<0.001)
                {
                    cout<<endl<<"\tRequired Root:\t"<<x[i]<<endl;break;
                }
            }
        else if(f(a)*f(x[i])==0)
        {
            cout<<endl<<"\tRequired Root:\t"<<x[i]<<endl;break;
        }
   }
}
