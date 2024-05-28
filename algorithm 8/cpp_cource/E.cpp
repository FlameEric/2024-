#include<iostream>
#include<cstdio>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
int n,s,mid;
int w[105];
bool dp[51][45000];
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)    scanf("%d",&w[i]),s+=w[i];
    dp[0][0]=1;mid=(n+1)/2;    
    for(int i=1;i<=n;i++)
    for(int j=mid-1;j>=0;j--)
    for(int k=450*i;k>=0;k--)
    if(dp[j][k])
        dp[j+1][k+w[i]]=1;
    int minn=s/2+1,ans=0;
    while(minn--)
    {
        if(dp[n/2][minn] || dp[n/2+n%2][minn])
        break;
    }
    printf("%d\n%d",minn,s-minn);
    return 0;
    
}