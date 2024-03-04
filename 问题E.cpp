#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <vector>
using namespace std;

struct Meet{
	int s;
	int e;

}meet[101];

bool cmp(Meet a, Meet b)
{
	if (a.e == b.e)
	{
		return a.s > b.s;
	}
	return a.e < b.e;
}
int main() {
	int last, n;
	int sum;
	while (cin >> n)
	{
		if (n == 0)
		{
			break;
		}
		for (int i = 0; i < n; i++)
		{
			cin >> meet[i].s >> meet[i].e;
		}
		sort(meet, meet + n, cmp);
		sum = 1;
		last = meet[0].e;
		for (int j = 1; j < n; j++)
		{
			if (meet[j].s >= last)
			{
				sum++;
				last = meet[j].e;
			}
		}
		cout << sum << endl;
	}
	return 0;
}