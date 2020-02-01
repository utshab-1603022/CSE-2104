#include<bits/stdc++.h>
using namespace std;
double X[100], Y[100], delY[100][100];
double P(double p, int i)
{
    double temp = p;
    for(int k=1; k<i; k++)
        p*=(temp-k);
    return p;
}
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int n;
    cout << "How many points:" << endl;
    cin >> n;
    cout << "Enter the value of x and y:" << endl;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> X[i] >> Y[i];
    }
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = 0 ; j < n - 1 - i ; j++)
        {
            if(i == 0)
            {
                delY[j][i] = Y[j+1] - Y[j];
            }
            else
            {
                delY[j][i] = delY[j+1][i-1]-delY[j][i-1];
            }
        }
    }
    double p,h,x;
    p = .5 - (delY[0][0] / delY[0][1]);
    cout << "\nP = " <<p;
    h = X[1] - X[0];
    x = X[0] + p*h;
    cout << "\nx =" << x;
    double y = 0;
    double p1;
    p1 = (x - X[0]) / h;
    for(int i = 0 ; i < n ; i++)
    {
        if(i == 0)
        {
            y += Y[0];
        }
        else
            y += (P(p1, i) / fact(i)) * delY[0][i-1];
    }
    cout << "\n\nResult: " << y;
    return 0;
}
