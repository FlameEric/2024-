#include <iostream>
#include <cmath>
using namespace std;

int m[] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
int match(int a)
{
	int num = 0;
	if (a == 0)
	{
		return 6;
	}
	while (a > 0)
	{
		num += m[a % 10];
		a = a / 10;
	}
	return num;
}
int main()
{
	
	int n;
	cin >> n;
	n = n - 4;
	int k = 0;
	for (int i = 0; i <= 1111; i++)
	{
		for (int j = 0; j <= 1111; j++)
		{
			if (match(i) + match(j) + match(i + j) == n)
			{
				k++;
			}
		}
	}
	cout << k;
	return 0;
}