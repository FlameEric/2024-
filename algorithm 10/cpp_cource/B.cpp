#include <bits/stdc++.h>
using namespace std;

struct brick
{
    int x, y;
};

bool cmp(const brick &a, const brick &b)
{
    if (a.y == b.y)
    {
        return a.x > b.x;
    }
    return a.y > b.x;
}

int main()
{
    int n;
    cin >> n;
    vector<brick> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].x >> a[i].y;
    }
    sort(a.begin(), a.end(), cmp);

    // 检验排序结果
    for (int i = 0; i < n; i++)
    {
        cout << a[i].x << " " << a[i].y << endl;
    }

    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            printf("(%d,%d)",a[0].x,a[0].y);
        }
        else
        {
            if(a[i].x>a[i-1].x&&a[i].y!=a[i-1].y)
            {
                  printf(",(%d,%d)",a[i].x,a[i].y);
            }
        }
    }
    system("pause");
    return 0;
}
