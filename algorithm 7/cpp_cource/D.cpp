#include <bits/stdc++.h>
using namespace std;
/*1
5 1 4 2 5 -12
4 -12 1 2 4
2*/

bool compare(int a, int b) {
    return a > b; // 返回 true 表示 a 在 b 前面（降序）
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a[100001];
        int b[100001];
        int c[100001];
        int d[100001];
        
        int m1;
        cin >> m1;
        for (int i = 1; i <= m1; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= m1; i++)
        {
            b[i] = 1;
            for (int j = 1; j < i; j++)
            {
                if (a[j] <= a[i])
                {
                    b[i] = max(b[i], b[j] + 1);
                }
            }
            //cout<<"b="<<b[i]<<endl;
        }
        int m2;
        cin >> m2;
        for (int i = 1; i <= m2; i++)
        {
            cin >> c[i];
        }
        for (int i = 1; i <= m2; i++)
        {
            d[i] = 1;
            for (int j = 1; j < i; j++)
            {
                if (c[j] <= c[i])
                {
                    d[i] = max(d[i], d[j] + 1);
                }
            }
              //cout<<d[i]<<endl;
        }
        sort(b+1,b+1+m1,compare);
        sort(d+1,d+1+m1,compare);
        int flag=0;
        for(int i=1;i<=m1;i++)
        {
            for(int j=1;j<=m2;j++)
            {
                if(b[i]==d[j])
                {
                    cout<<b[i]<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
    }

}