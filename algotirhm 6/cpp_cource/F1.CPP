#include <iostream>
using namespace std;

void MatrixChain(int p[], int n, int m[][1000], int s[][1000]) {
    for (int i = 1; i <= n; i++) {
        m[i][i] = 0;
    }
    for (int r = 2; r <= n; r++) {
        for (int i = 1; i <= n - r + 1; i++) {
            int j = i + (r - 1);
            m[i][j] = m[i][i] + m[i + 1][j] + p[i - 1] * p[i] * p[j];
            s[i][j] = i;
            for (int k = i + 1; k < j; k++) {
                int t = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (t < m[i][j]) {
                    m[i][j] = t;
                    s[i][j] = k;
                }
            }
        }
    }
}

int main() {
    int n;
    int p[1000];
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        int m[1000][1000], s[1000][1000];
        MatrixChain(p, n - 1, m, s);
        cout << m[1][n-1] << endl;
    }
    system("pause");
    return 0;
}
