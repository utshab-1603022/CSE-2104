
 #include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, i;
    cout<<"Enter the num of points"<<endl;
    cin>>n;
    double x[n], y[n], sx=0, sy=0, sx2=0, sxy=0, a0,a1, A,B;
    cout<<"Enter "<<n<<"pairs of x and y"<<endl;
    for (i=0; i<n; i++)
        cin>>x[i]>>y[i];
        for(i = 0; i < n; i++)
    {
        y[i] = log(y[i]);
    }
    for(i=0; i<n; i++)
    {
        sx=sx+x[i];
        sy=sy+y[i];
        sx2=sx2+(x[i]*x[i]);
        sxy=sxy+(x[i]*y[i]);
    }
    a0= ((sx2*sy)-(sx*sxy))/((n*sx2)-(sx*sx));
    a1= ((n*sxy)-(sx*sy))/((n*sx2)-(sx*sx));
    A=pow(2.7183,a0);
    B=a1;
    cout<<"a= "<<A<<endl;
    cout<<"b= "<<B<<endl;
    cout << "Equation : Y = " << A << "e^" << B << endl;
     double z = a0 + x[0]*a1;
     float err = fabs(z-y[0]);
     cout << "Error : " << err << endl;
     return 0;
}
