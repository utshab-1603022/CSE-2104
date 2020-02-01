#include<bits/stdc++.h>
using namespace std;

double fn( double a,double b)
{
    double f;
    f = a-b;
    return f;
}
int main()
{
    float x,y,h,y1,yx,k1,k2;
    int c;
    cout << "\nEnter x for y(x) :\t";
    cin >> yx;
    cout << "Enter the value of x & y:\n";
    cin >> x >> y;
    while(1)
    {
        cout<<"\nDo you want to give a Value of h?\n1.Yes\t2.No\n";
        cin>>c;
        if(c==1)
        {
            cout << "Enter the value of h :\t";
            cin >> h;

            for(float i=0.1; i<=yx; i=i+h)
            {
                cout<<"\nFor y("<<i<<"):\n";
                k1= h * fn(y,x);
                cout << "\tk1 = " <<k1  << endl;
                k2 = h* fn(y+k1,x+h);
                cout << "\tk2 = "<< k2 << endl;
                y1 = y + 0.5*(k1+k2);
                cout << "\ty1="<<y1 << endl;
                y = y1;
                x = x + h;
            }
        }
        else
            break;
    }

}
