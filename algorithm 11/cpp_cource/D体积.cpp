#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 10000;
int a[MAX_N];
bool hashArray[1001];

void dfs(int k, int sum, int n) {
    if (k == n + 1) {
        hashArray[sum] = true;
        return;
    }
    dfs(k + 1, sum + a[k], n);
    dfs(k + 1, sum, n);
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    dfs(1, 0, n);
    int ans = 0;
    for (int i = 1; i <= 1000; i++) {
        if (hashArray[i]) 
            ans++;
    }
    cout << ans << endl;
    return 0;
}
