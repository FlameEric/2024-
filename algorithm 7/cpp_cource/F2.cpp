#include <bits/stdc++.h>
#define N 40000

using namespace std;

int w[N], sum[N], d[N], dis[N], n, cnt;
int dp[N];

void read() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d%d", &w[i], &d[i]);
    for (int i = 1; i <= n; i++)
        sum[i] = sum[i - 1] + w[i];
    for (int i = n; i >= 1; i--)
        dis[i] = dis[i + 1] + d[i];
    // for (int i = 1; i <= n; i++)
    //     cout << dis[i] << "  " << sum[i] << endl;
}

void solve() {
    memset(dp, 0x3f, sizeof(dp));
    for (int i = 1; i <= n; i++)
        cnt += w[i] * dis[i];
    // cout << cnt << "cnt" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++)
            dp[i] = min(dp[i], cnt - dis[i] * (sum[i] - sum[j]) - dis[j] * sum[j]);
    }
    int ans = INT_MAX;
    for (int i = 1; i <= n; i++)
        ans = min(ans, dp[i]);
    cout << ans << endl;
}

int main() {
    read();
    solve();
    return 0;
}
