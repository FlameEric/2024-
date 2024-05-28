#include <bits/stdc++.h>
using namespace std;
struct brick
{
    int n,s;
}a[10001];
bool cmp(brick x,brick y)
{
    if (x.n == y.n) 
        return x.s < y.s; 
    return x.n < y.n; 
     
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].n>>a[i].s;
    }
    sort(a+1,a+1+n,cmp);
    int dp[10001];
    for(int i=1;i<=n;i++)
    {
        dp[i]=1;
        for(int j=1;j<i;j++)
        {
            if(a[i].s>a[j].s)
            {
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        cnt=max(dp[i],cnt);
    }
    cout<<cnt;
}