#include<bits/stdc++.h>
using namespace std;
int a[1000010];
int sqr(int s,int t)
{
    int i=s;
    int j=t;
    int tmp=a[s];
    while(i!=j)
    {
        while(i<j&&a[j]>=tmp)
        {
            j--;
        }
        a[i]=a[j];
        while(i<j&&a[i]<=tmp)
        {
            i++;
        }
        a[j]=a[i];
    }
    a[i]=tmp;
    return i;
}
void qsort(int s,int t)
{
    if(s<t)
    {
        int i=sqr(s,t);
        qsort(s,i-1);
        qsort(i+1,t);
    }
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int m;
		cin >> m;
		for (int j = 1; j <= m; j++)cin >> a[j];
		qsort(1, m);
		for (int j = 1; j <= m; j++)printf("%d ", a[j]);
		cout<<endl;
	}
	return 0;
}