 #include<bits/stdc++.h>
using  namespace std;
double funct(double x, double y)
{
    double f ;
    f = x - y * y;
    return f;
}
int main()
{
    double x, y ,y1, y2, y3, y4,y5, yx;
    cout<<"enter the value of x and y"<<endl;
    cin>>x>>y;
    y1 = funct(x,y);
    y2 = 1 - (2 * y * y1);
    y3 = (-2) * y * y2 - (2 * y1 * y1);
    y4 = (-2) * y * y3 - (6 * y1 * y2);
    y5 = (-2) * y * y4 - (8 * y1 * y3) - (6 * y2 * y2);
    cout<<"y1 = "<<y1<<"\ny2 = "<<y2<<"\ny3 = "<<y3<<"\ny4 = "<<y4<<endl;
    cin>>x;
    yx = 1 + x * y1 + (x * x* y2)/2 + (x * x * x* y3)/6 + (x*x*x*x*y3)/24 + (x*x*x*x*x*y5)/120;
    cout<<"y(x) = "<<yx<<endl;
    double h,t,k;
    cout<<"Enter the value of h,t sequencially :"<<endl;
    cin>>h>>t;
    while(x<t){
    k=h*funct(x,y);
    y=y+k; x=x+h;
    cout<<x <<"\t"<<y<<endl;
    }
 return 0;
}
