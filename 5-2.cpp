#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,n;
    double xx,x[20],y[20],store,sum = 0;

    cout<<"How many values: ";
    cin>>n;

    cout<<"\nEnter value of x and y ..."<<endl;
    for(i=1; i<=n; i++)
    {
        cout<<"\nx["<<i<<"] : ";
        cin>>x[i];

        cout<<"y["<<i<<"] : ";
        cin>>y[i];
    }
    cout<<"\nTake value of x for determination: ";
    cin>>xx;
    for(i=1; i<=n; i++)
    {
        store = 1;
        for(j=1; j<=n; j++)
        {
            if(j != i)
            {
                store = store * ((xx - x[j]) / (x[i] - x[j]));
            }
        }
        sum = sum + (store * y[i]);
    }
    cout<<"\n\nResult: "<<sum<<endl;
}

