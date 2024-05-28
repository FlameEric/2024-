#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10001];
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    int max=1111110;
    for(int i=0;i<10;i++)
    {
        if(max>a[i])
        {
            max=a[i];
        }
    }
    cout<<max;
    system("pause");
    return 0;

}