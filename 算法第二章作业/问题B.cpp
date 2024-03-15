//����һ�����ڻ����5���������ж��Ƿ��ֽܷ����������֮��
//�����ļ���������������ݣ�ÿ����������ռһ�У�Ϊһ��������m��mΪ�������Ҳ�С��5��������32767����������һֱ���ļ�β��
//��ÿ���������ݣ����m�ֽܷ����������֮�ͣ����yes���������no��
//�жϵ�����Ϊֹ�ǲ������� 21
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