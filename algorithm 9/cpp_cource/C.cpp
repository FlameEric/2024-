
#include<iostream>
#include<algorithm>
 
using namespace std;
 
int a[200020];
 
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	int tot = 0;
	while (n > 3) {
		if (a[2] * 2 < a[n - 1] + a[1]) {
			tot += a[2] + a[1] + a[n] + a[2];
		} else { 
			tot += a[n] + a[1] + a[n-1] + a[1];
		}
		n -= 2;
	}
	if (n == 3) {
		tot += a[1] + a[2] + a[3];
	} else {
		tot += a[2];
	}
	cout << tot << endl;
	return 0;
}
