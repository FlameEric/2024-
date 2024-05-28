#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_N = 100005;
int a[MAX_N];

int search(const int& l, const int& r, const int& m) {
    int left = l, right = r;
    int index=0;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == m) {
            index=mid;
            return index+1;
        }
        else if (a[mid] < m) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    index=left;
    return index+1;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    for (int i = 0; i < m; i++) {
        int x;
        scanf("%d", &x);
        cout<<search(0, n - 1, x)<<"\n";
    }
    system("pause");
    return 0;
}
