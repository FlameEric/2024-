#include <bits/stdc++.h>
using namespace std;
int n=1001;
int a[1001];
int b[1001];
int f[1001][1001];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    //8
    //389 207 155 300 299 170 158 65
    //6
    //如果我用动态规划，f[i][j]--f[1][1]=a[1],f[1][0]=0,if f[2][2]>f[1][1] f[2][2]=f[1][1],if <
    //f[2][2]=a[2],f[2][0]=0;f[2][1]=a[2]
    //f[3][0]=0,f[3][1]=a[3],f[3][2]和f[2][1]比较,f[3][3]和f[2][2]比较
    //f[4][0]=0,f[4][1],f[4][2],f[3][1]
    //可是我想知道连续次数咋办
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            f[i][j]=a[i];
            if(j==0)
            {
                f[i][j]=0;
            }
            else if(j==1)
            {
                f[i][j]=a[i];
                b[i]=1;
            }
            else 
            {
                if(f[i][j]>f[i-1][j-1])
                {
                    f[i][j]=f[i-1][j-1];
                }
                else
                {
                    f[i][j]=a[i];
                    b[i-j+1]++;
                }
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<b[i]<<endl;
        ans=max(ans,b[i]);
    }
    cout<<ans;
    system("pause");
    return 0;
}