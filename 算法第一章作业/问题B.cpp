#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
	int n;
	int b;
	cin >> n >> b;
	int num[10000];
	int i;
	int max = 0;
	for (i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	for (i = 0; i < n; i++)
	{
		max = i;
		for (int j = i + 1; j < n; j++)
		{
			if (num[max] < num[j])
			{
				max = j;
			}
		}
		int temp = num[max];
		num[max] = num[i];
		num[i] = temp;
	}
	int lon = 0;
	int k = 0;
	while (lon < b) {
		lon = lon + num[k];
		k = k + 1;
	}
	cout << k;
	return 0;
}