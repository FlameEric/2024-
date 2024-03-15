#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n, m;
	cin >> n;
	cin >> m;
	double w[10000];
	double v[10000];
	int i;
	for (i = 0; i < n; i++)
	{
		cin >> w[i];
		cin >> v[i];
	}
	double xing[10000];
	for (i = 0; i < n; i++)
	{
		xing[i] = v[i] / w[i];
	}
	for (int x = 0; x < n; x++)
	{
		int max = x;
		for (int y = x + 1; y < n; y++)
		{
			if (xing[max] < xing[y])
			{
				max = y;
			}
		}
		double temp = xing[x];
		xing[x] = xing[max];
		xing[max] = temp;

	    temp = w[x];
		w[x] = w[max];
		w[max] = temp;

	    temp = v[x];
		v[x] = v[max];
		v[max] = temp;
	}
	double zw = 0;
	double zv = 0;
	int k = 0;
	while (zw < m)
	{
		zw = zw + w[k];
		zv = zv + v[k];
		k++;
	}
	k--;
	zv = zv - v[k];
	double sw = 0;
	double sv = 0;
	sw = m - (zw-w[k]);
	sv = v[k] * (sw / w[k]);
	cout << fixed << setprecision(1) << zv + sv << endl;
	
}