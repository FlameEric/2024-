#include <bits/stdc++.h>
using namespace std;
struct bricks
{
    int w,l,h;
}a[10001];
bool cmp(bricks a, bricks b) {
    if(a.w==b.w)
    {
        return a.h<b.l;
    }
    return a.w<b.w;
}
int main()
{
    int n;
    int c[101];
    int num=1;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        int k=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=3;j++)
            {
                cin>>c[i];
            }
            sort(c+1,c+4);
            a[k].w=c[1],a[k].l=c[2],a[k].h=c[3],k++;
            a[k].w=c[2],a[k].l=c[3],a[k].h=c[1],k++;
            a[k].w=c[1],a[k].l=c[3],a[k].h=c[2],k++;
        }
        sort(a+1,a+k,cmp);
        int dp[10001];
        for(int i=1;i<k;i++)
        {
            dp[i]=a[i].h;
            for(int j=1;j<i;j++)
            {
                if(a[j].w<a[i].w&&a[j].l<a[i].l)
                {
                    dp[i]=max(dp[i],dp[j]+a[i].h);
                }
            }
        }
        int ans=0;
        for(int i=1;i<k;i++)
        {
            ans=max(ans,dp[i]);
        }
        printf("Case case %d: maximum height = %d\n",num,ans);
        num++;

    }
    return 0;
}