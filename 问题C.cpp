#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 0;
	for (i = 0; i < n; i++) {	
		int n1 = 0;
		int k = 0;
		int w, num;
		int max;
		int x;
		int y;
		int we[10000];
		cin >> w;
		cin >> num;
		for (int j = 0; j < num; j++) {
			cin >> we[j];
		}
		for (x = 0; x < num; x++)
		{
			max = x;
			for ( y = x + 1; y < num; y++)
			{
				if (we[max] > we[y])
				{
					max = y;
				}
			}
			int temp = we[max];
			we[max] = we[x];
			we[x] = temp;
		}
		while (n1 < w) {
			n1 = n1 + we[k];
			k = k + 1;
		}
		cout << k-1 << "\n";
	}

	return 0;
}