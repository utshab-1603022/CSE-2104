#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <map>
using namespace std;
int main()
{
    int i, j = 1, k, n;
    double h, x, a[10000], b[10000], del1[10000], del2[10000];
    double del3[10000], del4[10000], del5[10000], del6[10000], res1, res2;
    printf("Enter amount of data ");
    scanf("%d",&n);
    printf("\nValues Of X & Y\n");
    for(i = 0 ; i < n ; i++)
    {
        scanf("%lf %lf",&a[i],&b[i]);
    }
    h = a[1] - a[0];

    printf("\nForward Difference Table\n");
    for(i = 0 ; i < n - j ; i++)
    {
        del1[i] = b[i+1] - b[i];
        printf("%lf\n",del1[i]);
    }
    j++;
    cout << endl;
    for(i = 0 ; i < n - j ; i++)
    {
        del2[ i ] = del1[ i + 1 ] - del1[ i ];
        printf("%lf\n",del2[i]);
    }
    j++;
    cout << endl;
    for(i = 0 ; i < n - j ; i++)
    {
        del3[i] = del2[i+1] - del2[i];
        printf("%lf\n",del3[i]);
    }
    j++;
    cout << endl;
    for(i = 0 ; i < n - j ; i++)
    {
        del4[ i ] = del3[ i + 1 ] - del3[ i ];
        printf("%lf\n",del4[i]);
    }
    j++;
    cout << endl;

    for(i = 0 ; i < n - j ; i++)
    {
        del5[ i ] = del4[ i + 1 ] - del4[i];
        printf("%lf\n",del5[i]);
    }
    j++;
    cout << endl;
    for( i = 0 ; i < n - j ; i++)
    {
        del6[ i ] = del5[ i + 1 ] - del5[ i ];
        printf("%lf\n",del6[i]);
    }
    cout << "Enter the value of the required x " << endl;
    scanf("%lf",&x);
    for(i = 0 ; i < n ; i++)
    {
        if( x == a[i] )
        {
            break;
        }
    }
    k = i;
    res1 = ( 1 / h ) * ( del1[k] - (( del2[k]) / 2 ) +(( del3[k]) / 3) - ((
                             del4[k]) / 4) + ((del5[k]) / 5));
    res2 = ( 1 / ( h * h )) * ( del2[k] - del3[k] + (.9167 * (del4[k])) -
                                (.833 * (del5[k])));
    printf("\nFirst Order Diff = %.6lf",res1);
    printf("\nSecond Order Diff = %.6lf",res2);
    return 0;
}
