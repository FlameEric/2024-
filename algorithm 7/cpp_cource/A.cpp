#include <bits/stdc++.h>
using namespace std;
int a[30005],b[30005];
int f[30005][4];
int n,ans=2147483640,mx=2147483640;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[n-i+1]=a[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=3;j++)
        {
            f[i][j]=100000;
            for (int k=j;k>=1;k--)
            {
                f[i][j]=min(f[i][j],f[i-1][k]);
            }
            if(j!=a[i])
            {
                f[i][j]++;
            }
        }   
    }
    for(int i=1;i<=3;i++)
    {
        ans=min(f[n][i],ans);
    }
for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=3;j++)
        {
            f[i][j]=100000;
            for (int k=j;k>=1;k--)
            {
                f[i][j]=min(f[i][j],f[i-1][k]);
            }
            if(j!=b[i])
            {
                f[i][j]++;
            }
        }   
    }
    for(int i=1;i<=3;i++)
    {
        ans=min(f[n][i],ans);
    }

    cout<<ans;
    system("pause");
    return 0;
//在用不同组的升序排序时，可以使用动态排序，将前一组的数据传递到下一组

}