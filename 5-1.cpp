#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,choice;
    float ax[200],ay[200],diff[200][200];
    float x,p,h,nr,dr,y=0,y1,y2,y3,y4,y5,y6;
    cout<<"Enter the number of points:";
    cin>>n;
    cout<<"Enter the values of points:"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>ax[i]>>ay[i];
    }
    h=ax[1]-ax[0];
    for(i=0; i<n-1; i++)
    {
        diff[i][1]=ay[i+1]-ay[i];

    }

    for(j=2; j<=4; j++)
    {

        for(i=0; i<n-j; i++)
            diff[i][j]=diff[i+1][j-1]-diff[i][j-1];

    }
    while(1)
    {
        cout<<"\n1.Forward interpolation 2.Backward interpolation 0.Exit"<<endl;
        cin>>choice;
        if(choice == 1)
        {
            cout<<"Enter the value of x of desired point: ";
            cin>>x;
            i=0;
            do
            {
                i++;
            }
            while(ax[i]<x);

            i--;
            p=(x-ax[i])/h;
            y1=p*diff[i][1];
            y2=p*(p-1)*diff[i-1][2]/2;
            y3=(p+1)*p*(p-1)*diff[i-2][3]/6;
            y4=(p+1)*p*(p-1)*(p-2)*diff[i-3][4]/24;
            y=ay[i]+y1+y2+y3+y4;

            cout<<"Desired value of y:"<<y<<endl;
        }
        else if(choice == 2)
        {
            cout<<"Enter the value of x of desired point: ";
            cin>>x;
            i=0;
            do
            {
                i++;
            }
            while(ax[i]<x);

            i--;
            p=(x-ax[i])/h;
            y1=p*diff[i-1][1];
            y2=p*(p+1)*diff[i-1][2]/2;
            y3=(p+1)*p*(p-1)*diff[i-2][3]/6;
            y4=(p+1)*p*(p-1)*(p+2)*diff[i-3][4]/24;
            y=ay[i]+y1+y2+y3+y4;

            cout<<"Desired value of y:"<<y<<endl;
        }
        else if(choice == 0)
        {
            exit(1);
        }
    }

    return 0;
}
