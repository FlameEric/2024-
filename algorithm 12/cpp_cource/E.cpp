#include<bits/stdc++.h>
using namespace std;
int i,j,cx[4]={-1,1,0,0},cy[4]={0,0,1,-1},t=0,w=1,a[6][6],e[50],s=99999;
struct s
{
    int x;int y;
}d[50],pp[50];
void dfs(int x,int y,int t)
{
     if(x==4&&y==4)
    {
        if(t<s) 
        {
            s=t;
            for(int j=0;j<s;j++)
                pp[j].x=d[j].x,pp[j].y=d[j].y;
        }
        return;
    }
        for(int i=0;i<4;i++)
        {
            int xx=x+cx[i];int yy=y+cy[i];
            if(xx>=0&&xx<5&&yy>=0&&yy<5&&a[xx][yy]==0)
            { 
                  a[xx][yy]=1,d[t].x=xx,d[t].y=yy;
                   dfs(xx,yy,t+1);
                       a[xx][yy]=0;
                }       
    }

}
int main()
{
        memset(a,0,sizeof(a));
        for(i=0;i<5;i++)
          for(j=0;j<5;j++)
             cin>>a[i][j]; d[0].x=0,d[0].y=0;
             dfs(0,0,1);
            for(i=0;i<s;i++)
             printf("(%d, %d)\n",pp[i].x,pp[i].y);
               return 0;
}
