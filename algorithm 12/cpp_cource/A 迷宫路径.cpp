#include <bits/stdc++.h>
using namespace std;
int vis[1000][1000];
int a[1000][1000];
int m,n;
int ans=0;
int dir[4][2]={{0,-1},{0,1},{1,0},{-1,0}};
int check(int x,int y)
{
    if(vis[x][y]==0&&a[x][y]==0&&x>=1&&x<=m&&y>=1&&y<=n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void dfs(int x,int y)
{
    if(x==m&&y==n)
    {
        ans++;
        return;
    }
     
    for(int i=0;i<4;i++)
    {
        int xx=x+dir[i][0];
        int yy=y+dir[i][1];
        if(check(xx,yy))
        {
            vis[xx][yy]=1;
            dfs(xx,yy);
            vis[xx][yy]=0;
        }
    }
     
}
int main()
{
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    vis[1][1]=1;
    dfs(1,1);
    cout<<ans;
}