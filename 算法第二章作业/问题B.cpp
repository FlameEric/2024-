//给定一个大于或等于5的奇数，判断是否能分解成两个素数之和
//输入文件包含多个测试数据，每个测试数据占一行，为一个正整数m，m为奇数，且不小于5，不大于32767。测试数据一直到文件尾。
//对每个测试数据，如果m能分解成两个素数之和，输出yes，否则输出no。
//判断到自身为止是不是素数 21
#include <iostream>
#include <cmath>
using namespace std;

bool panduan(int num)
{
	if (num <= 1) return false;
	if (num == 2) return true;
	if (num % 2 == 0) return false;

	for (int i = 3; i <= sqrt(num); i += 2) {
		if (num % i == 0) return false;
	}

	return true;
}

int main()
{
	int n;
	while (cin >> n)
	{
		int a[100001];
		int k = 0;
		for (int i = 2; i < n; i++)
		{
			if (panduan(i) == true)
			{
				a[k] = i;
				k++;
			}
		}
		k--;
		int flag = 0;
		for (int i = 0; i < k; i++)
		{
			for (int j = i + 1; j <= k; j++)
			{
				if ((a[i] + a[j]) == n)
				{
					flag = 1;
					break;
				}
			}
			if (flag == 1)
			{
				break;
			}
		}
		if (flag == 1)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
				
		}
	}
	
}