#include <bits/stdc++.h>
using namespace std;
/*zhuozhuo有N分钟时间跑步，每分钟他可以跑步或者休息。
若他在第i分钟跑步，可以跑出D_i米，同时疲倦程度增加1（初始为0）。
若他在第i分钟休息，则疲倦程度减少1。无论何时，疲倦程度都不能超过M。
另外，一旦他开始休息，只有当疲惫程度减为0时才能重新开始跑步。在第N分钟后，她的疲倦程度必须为0。
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int d[1001];
    int dp[1000][1000];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>d[i];
    }
    dp[1][1]=d[1];
    for(int i=2;i<=n;i++)
    {
        dp[i][0]=dp[i-1][0];
        for(int j=1;j<i;j++)
        {
            dp[i][0]=max(dp[i][0],dp[i-j][j]);
        }
        for(int j=1;j<=m;j++)
        {
            dp[i][j]=dp[i-1][j-1]+d[i];
        }
    }
    
    printf("%d", dp[n][0]);
}
//利用二位数组的模拟，每一行每一列的规律，进行相加运算