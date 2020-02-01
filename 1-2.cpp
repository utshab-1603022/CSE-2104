///errors

#include<bits/stdc++.h>
using namespace std;

int main()
{
    float x1,x2,x3,xt,e[4],m;int i;
    cout<<"Enter Expected value and three given values:\t"<<endl;
    scanf("%f %f %f %f",&xt,&x1,&x2,&x3);

    e[1] = fabs(xt-x1);
    e[2] = fabs(xt-x2);
    e[3] = fabs(xt-x3);

    m=e[1];

    for(i=1;i<=3;i++)
    {
        if(m > e[i])
        m=e[i];
    }

    cout<<"Absolute error:\t"<<m<<endl
        <<"Relative error:\t"<<m/xt<<endl
        <<"Percentage error:"<<m/xt*100<<endl;

}
