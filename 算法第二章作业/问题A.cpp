#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int l[100001];
	int i;
	int k = 0;
	for (i = 0; i < n; i++)
	{
		cin >> l[i];
	}
	for (i = 1; i < n ; i++)
	{
		if (l[i] == l[i -1])
		{
			if (l[i] == 1)
			{
				l[i] = 0;
			}
			else
			{
				l[i] = 1;
			}
			k++;
		}
	}
	cout << k;
}