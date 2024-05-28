#include <iostream>
#include <cstring>

using namespace std;

const int N = 105;

int n, k;
int w[N];
int f[N][N];

int main()
{
    scanf("%d%d", &n, &k);

    for(int i = 1; i <= n; i ++)
        scanf("%d", &w[i]);

    // 初始化f[0]：由于只有 f[0][0] 是有意义/合法的（初值为 0），f[1...k - 1]都是无意义的/非法的（初值为 -INF）
    memset(f, -0x3f, sizeof f);
    f[0][0] = 0;

    for(int i = 1; i <= n; i ++)
        for(int j = 0; j < k; j ++)
            f[i][j] = max(f[i - 1][j], f[i - 1][((j - w[i]) % k + k) % k] + w[i]);

    printf("%d", f[n][0]);
    return 0;
}

