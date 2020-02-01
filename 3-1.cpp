///Newton Raphson
///x^3-2x-5
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x[100],fx,f1x,error=10;
    int i;
    x[0]=1.5;
    printf("\n\tSl. NO.\t|\t\tXn\t|\tXn+1\t\t|\tError\t\t|\t\n\t---------------------------------------------------------------------------------\t\n");
    for(i=0; i<200; i++)
    {
        fx=(x[i]*x[i]*x[i])-(2*x[i])-5;
        f1x=(3*x[i]*x[i])-2;
        x[i+1]=x[i]-(fx/f1x);
        error=fabs(x[i+1]-x[i]);

        printf("\t%d.\t|\t%lf\t|\t%lf\t|\t%lf\t|\t\n",i+1,x[i],x[i+1],error);
        if(error<0.0001)
        {
            printf("\n\tRoot = %lf\n",x[i+1]);
            break;
        }
    }
}
