#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    // 预处理每个查询值对应的结果
    std::vector<int> results;
    results.reserve(m);
    for (int i = 0; i < m; ++i) {
        int x;
        scanf("%d", &x);
        auto it = std::lower_bound(arr.begin(), arr.end(), x);
        if (it != arr.end()) {
            results.push_back(it - arr.begin() + 1);
        } else {
            results.push_back(n + 1);
        }
    }

    // 输出结果
    for (int i = 0; i < m; ++i) {
        printf("%d\n", results[i]);
    }

    return 0;
}
