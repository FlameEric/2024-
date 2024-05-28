#include <bits/stdc++.h>
using namespace std;
char a[105][105];
int vis[105][105];
int n,m;
int dir[4][2]={{0,-1},{0,1},{1,0},{-1,0}};
struct node
{
    int r;
    int c;
    int step;
};

void dfs(int sr,int sc,int er,int ec)
{
    queue<node>qe;
    node q,t;
    q.r=sr;
    q.c=sc;
    q.step=0;
    qe.push(q);
    vis[q.r][q.c]=1;
    while(!qe.empty())
    {
        q=qe.front();
        qe.pop();
        if(q.r==er&&q.c==ec)
        {
            cout<<q.step;
            break;
        }
        for(int i=0;i<4;i++)
        {
            t.r=q.r+dir[i][0];
            t.c=q.c+dir[i][1];
            if(a[t.r][t.c]=='.'&&t.r>=1&&t.r<=n&&t.c>=1&&t.c<=m&&vis[t.r][t.c]==0)
            {
                t.step=q.step+1;
                vis[t.r][t.c]=1;
                qe.push(t);
            }
            
        }
    }
}
int main()
{
    int sr,sc,er,ec;
    cin>>n>>m;
     for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='S')
                {
                    sr=i;
                    sc=j;
                    a[i][j]='.';
                }
                if(a[i][j]=='T')
                {
                    er=i;
                    ec=j;
                    a[i][j]='.';
                }
            }
        }
        dfs(sr,sc,er,ec);
}