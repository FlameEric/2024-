#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[100010];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    int b[100010];
    b[n]=0;
    for(int i=n-1;i>=1;i--)
    {
        b[i]=1000000;
        for(int j=i+1;j<=n;j++)
        {
            if(a[i][j]!='0')
            {
                a[i][j]+=b[j];
                b[i]=min(a[i][j],b[i]);
            }
        }
    }
    cout<<b[1];
}