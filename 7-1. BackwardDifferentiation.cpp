#include<bits/stdc++.h>

using namespace std;
int main()
{
    int p,n;
    float x[10],y[10];
    printf("How many data you want to calculate: ");
    scanf("%d",&n);
    for(p=0; p<n; p++)
    {
        scanf("%f%f",&x[p],&y[p]);
    }
    float d1[10],d2[10];
    float res1,res2,d3[10],d4[10],d5[10],d6[10];
    float h;
    h = x[1] - x[0];
    cout<< "Here h = " << h << endl;
    int i = 0;
    cout << "\n\n";
    cout << "The differences are:\n";
    cout << "\n\nThe differences of del^1 del^2 is:\n\n";
    for( i = 0 ; i < 6 ; i++)
    {
        d1[i] = y[i+1] - y[i];
        cout << "del : " << i << " : " << d1[i] << endl;
        d1[i+1] = y[i+2] - y[i+1];
        d2[i] = d1[i+1] - d1[i];
        cout << " del ^ 2 : " << i << " : " << d2[i] << endl;
    }
    cout << "\n\nThe differences of del^3 del^4 is:\n\n";
    for( i = 0 ; i < 4 ; i++)
    {
        d3[i] = d2[i+1] - d2[i];
        cout << " del ^ 3 : " << i << " : " << d3[i] << endl;
        d3[i+1] = d2[i+2] - d2[i+1];
        d4[i] = d3[i+1] - d3[i];
        cout << " del ^ 4 : " << i << " : " << d4[i] << endl;
    }
    cout << "\n\nThe differences of del^5 del^6 is:\n\n";
    for(i = 0 ; i < 2 ; i++)
    {
        d5[i] = d4[i+1] - d4[i];
        cout << " del ^ 5 : " << i << " : " << d5[i] << endl;
        d5[i+1] = d4[i+2] - d4[i+1];
        d6[i] = d5[i+1] - d5[i];
        cout << " del^6 : " << i << " : " << d6[i] << endl;
    }
    cout << "\n\nFor x=2.2\n";
    cout << "\n\nThe result of backward differentiation(dy/dx):\n ";
    res1 = (( d1[5] + (.5*d2[4]) + (.33333) * d3[3]) + (.25*d4[2]) +
            (.2*d5[1])) / h;
    cout << res1 << endl;
    cout << "\n\nThe result of backward differentiation(d^2y/dx^2):\n ";
    res2 = ((d2[4] + d3[3] + (0.91667 * d4[2]) + (0.833334 * d5[1])) / (h *
            h));
    cout << res2 <<endl;
}
