#include <bits/stdc++.h>
using namespace std;
struct bricks
{
    int w,h;
}a[10001];
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int dp[100000];
    int end=99999999;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].w>>a[i].h;
    }
    int sum[10001];
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            sum[1]=0;
        }
        else
        {
             sum[i]=sum[i-1]+a[i-1].h;
        }     
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int x=1;x<=i;x++)
        {
          dp[i]+=(sum[i]-sum[x])*a[x].w;
        }
        for(int j=i+1;j<=n;j++)
        {
             for(int y=i+1;y<=j;y++)
        {
             dp[j]+=(sum[j]-sum[y])*a[y].w;
        }
        ans=0;
        for(int k=j+1;k<=n;k++)
        {
            ans=ans+a[k].w*a[k].h;
        }
        //cout<<i<<" "<<j<<" "<<dp[i]+dp[j]+ans<<endl;
        end=min(end,dp[i]+dp[j]+ans);
        
        }      
    }
    cout<<end;
    system("pause");
}