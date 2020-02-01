///Comparison & Menu
///x^3-2x-5
#include<bits/stdc++.h>
using namespace std;

double f(double x)
{
    return x*x*x-2*x-5;
}
int bisection()
{
    double a = 2,b = 3,x[1001];int i;
    cout<<"\tSl no.\t|\ta\t|\tb\t|\tx\t|\tf(x)\n";

    for(i=1,x[0]=0;;i++)
    {
        x[i]=(a+b)/2;
        cout<<"\t"<<i<<"\t|\t"<<a<<"\t|\t"<<b<<"\t|\t"<<x[i]<<"\t|\t"<<f(x[i])<<endl;

        if(f(a)*f(x[i])<0)
        {
            b = x[i];
            if(fabs(x[i]-x[i-1])<0.001)
            {
                cout<<endl<<"Required Root:\t"<<x[i]<<endl<<"Bisection Iteration: "<<i<<endl<<endl;break;
            }
        }
        else if(f(a)*f(x[i])>0)
        {
            a = x[i];
            if(fabs(x[i]-x[i-1])<0.001)
            {
                cout<<endl<<"Required Root:\t"<<x[i]<<endl<<"Bisection Iteration: "<<i<<endl<<endl;break;
            }
        }
        else if(f(a)*f(x[i])==0)
        {
            cout<<endl<<"Required Root:\t"<<x[i]<<endl<<"Bisection Iteration: "<<i<<endl<<endl;break;
        }
    }
    return i;
}

int fp()
{
    double a = 2,b = 3,x[1001];int i;
    cout<<"\tSl no.\t|\ta\t|\tb\t|\tx\t|\tf(x)\n";

    for(i=1,x[0]=0;;i++)
    {
        x[i]=(a*f(b)-b*f(a))/(f(b)-f(a));
        cout<<"\t"<<i<<"\t|\t"<<a<<"\t|\t"<<b<<"\t|\t"<<x[i]<<"\t|\t"<<f(x[i])<<endl;

        if(f(a)*f(i)<0)
        {
            b = x[i];
            if(fabs(x[i]-x[i-1])<0.001)
            {
                cout<<endl<<"Required Root:\t"<<x[i]<<endl<<"False Position Iteration: "<<i<<endl<<endl;break;
            }
        }
        else if(f(a)*f(i)>0)
        {
            a = x[i];
            if(fabs(x[i]-x[i-1])<0.001)
            {
                cout<<endl<<"Required Root:\t"<<x[i]<<endl<<"False Position Iteration: "<<i<<endl<<endl;break;
            }
        }
        else if(f(i)==0)
        {
            cout<<endl<<"Required Root:\t"<<x[i]<<endl<<"False Position Iteration: "<<i<<endl<<endl;break;
        }
    }
    return i;
}
void compare()
{
    int x=bisection();
    int y=fp();
    if(x>y)
        cout<<"False Position Better\n\n";
    else
        cout<<"Bisection Better\n\n";
}
void menu()
{
    int select;
    while(1)
    {
        cout<<"Choose what to do\n1.Bisection\n2.False Position\n3.Comparison\n4.End\n";
        cin>>select;
        switch(select)
        {
            case 1: bisection();break;
            case 2: fp();break;
            case 3: compare();break;
            case 4: break;
            default: cout<<"Incorrect number chosen\n";
        }
        if(select==4)
                break;
    }
}

int main()
{
    menu();
}
