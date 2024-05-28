#include <bits/stdc++.h>
using namespace std;
int n=1001;
int a[1001];
int b[1001];
int f[1001][1001];
int main()
{
   cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        b[i]=1;
        for(int j=1;j<i;j++)
        {
            if(a[j]>=a[i])
                b[i]=max(b[i],b[j]+1);
        }
        cnt=max(cnt,b[i]);
    }
    //最长降序子序列
    cout<<cnt;
}