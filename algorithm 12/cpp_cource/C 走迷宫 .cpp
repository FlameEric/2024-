#include <bits/stdc++.h>
using namespace std;
int vis[1000][1000];
char a[1000][1000];
int n,m;
int ans=0;
int ha, la, hb, lb;
int flag=0;
int end1=9999999;
int dir[4][2]={{0,-1},{0,1},{1,0},{-1,0}};
int check(int x,int y)
{
    if(a[x][y]=='.'&&x>=0&&x<n&&y>=0&&y<m)
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
    if(x==n-1&&y==m-1)
    {
        flag=1;
        end1=min(ans,end1);
        return;
    }
    else
    {
        for(int i=0;i<4;i++)
    {
        int xx=x+dir[i][0];
        int yy=y+dir[i][1];
        if(check(xx,yy))
        {
            ans++;
            a[xx][yy]='#';
            dfs(xx,yy);
             a[xx][yy]='.';
             ans--;
        }
    }
    }

    

}
int main()
{
   
        flag=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        
        dfs(0,0);
        cout<<end1+1;
    
    return 0;
}