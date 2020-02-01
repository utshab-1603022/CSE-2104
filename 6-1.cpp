#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    double sx = 0,sy = 0, sx2 = 0, sxy = 0, a0 , a1,x1,y1;
    cout<<"enter the number of points:"<<endl;
    cin>>n;
    double x[n], y[n];
    cout<<"enter the value of x and y"<<endl;
    for(i=0; i<n; i++)
        cin>>x[i]>>y[i];

 for(i=0; i<n; i++)
    {
        sx=sx+x[i];
        sy=sy+y[i];
        sx2=sx2+(x[i]*x[i]);
        sxy=sxy+(x[i]*y[i]);
    }
    a0 = ((sx2 * sy) - (sx * sxy))/((n * sx2) - (sx * sx));

     a1 = ((n * sxy)-(sx * sy))/((n * sx2)-(sx * sx));
     cout<<"The equation of straight line is\n Y= "<<a0<<" + "<<a1<<"x1"<<endl;

     cout<<"enter the value of x1"<<endl;
     cin>>x1;
       y1 = a0 + (a1 * x1);
     cout<<"The value of y is\n<< Y= "<<y1<<endl;
     double err = fabs(y1-y[2]);
cout << "Error : " << err << endl;
 return 0;
}
