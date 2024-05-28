#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int d[10000];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(a[i]>a[j])
            {
                d[i]=max(d[i],d[j]+1);
            }
        }
    }
    cout<<d[n];
}