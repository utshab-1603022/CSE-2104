///Ramanuzan's Method
///User Input Equation
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a[10]={0},b[10]={0},c[10],e=0,sum=0,r[10]={0};
    int n,i,j,k;
    b[1]=1;
    printf("Degree of the eqn:");
    cin>>n;
    for(i=0;i<=n;i++)
    {
        printf("The co-efficient of X^%d:",i);
        cin>>c[i];

        a[i+1]=(-c[i])/c[0];
    }
    printf("\n\tB[i]\t|\tB[i+1]\t\t|\tB[i]/B[i+1]\t|\tError\n---------------------------------------------------------------------------------------\n");

    for(i=1;    ;i++)
    {
        sum=0;
         for(j=1;j<=i;j++)
        {
            sum=sum+(a[j]*b[i]);
        }
        b[i+1]=sum;
        r[i]=(b[i])/b[i+1];
        e=fabs(r[i]-r[i-1]);
        printf("%lf\t|\t%lf\t|\t%lf\t|\t%lf\n",b[i],b[i+1],r[i],e);
        if(e<=0.0001)
       {
            printf("\n\tRoot of the Eqn is %lf",r[i]);
            break;
       }

    }
   }


/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a[100]={0},b[100]={0},r[100]={0};
    long long i,j,k;
    a[1]=11/6,a[2]=-1,a[3]=1/6;
    b[1]=1,b[2]=11/6;
    for(i=3;i<20;i++)
    {
        b[i]=0;
        for(j=1,k=i-1;j<i,k>0;j++,k--)
        {
            b[i]=b[i]+a[j]*b[k];
            if(j==i)
                break;
        }
    }
    for(i=1,j=2;i<200&&j<200;i++,j++)
    {
        r[i]=b[i]/b[j];
        cout<<r[i]<<endl;
        if((fabs(r[i]-r[i-1]))<0.0001)
        {
            cout<<"Root[i]: "<<r[i]<<endl;
            break;
        }
    }
}*/
