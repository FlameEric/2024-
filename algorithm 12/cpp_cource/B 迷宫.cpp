#include <bits/stdc++.h>
using namespace std;
int vis[1000][1000];
char a[1000][1000];
int n,m;
int ans=0;
int ha, la, hb, lb;
int flag=0;
int dir[4][2]={{0,-1},{0,1},{1,0},{-1,0}};
int check(int x,int y)
{
    if(a[x][y]=='.'&&x>=0&&x<m&&y>=0&&y<m)
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
    if(x==hb&&y==lb)
    {
        flag=1;
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
            a[xx][yy]='#';
            dfs(xx,yy);
             a[xx][yy]='.';
        }
    }
    }

    

}
int main()
{
    cin>>n;
    while(n--)
    {
        flag=0;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        
        cin>>ha>>la>>hb>>lb;
        dfs(ha,la);
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}