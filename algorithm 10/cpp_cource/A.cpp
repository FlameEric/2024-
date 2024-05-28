#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[100010];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int f[1000][1000];
    f[1][0]=100;
    f[1][1]=a[1];
    for(int i=2;i<=n;i++)
    {
        f[i][0]=max(f[i-1][0],(f[i-1][1]/a[i])*100);
        f[i][1]=max(f[i-1][1],(f[i-1][0]*a[i])/100);
    }
    cout<<f[n][0];

system("pause");
    return 0;
}