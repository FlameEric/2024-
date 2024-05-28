#include <bits/stdc++.h>
using namespace std;
int a[100][100];
int cmax=0;
int n;
int cnt=1;
int kmax=0;
void dfs(int x,int y)
{
    if(x==n+1)
    {
        if(kmax>cmax) cmax=kmax;
        return;
    }
    kmax=kmax+a[x][y];
   dfs(x+1,y+1);
   dfs(x+1,y);
    kmax=kmax-a[x][y];
   

}
int main()
{
    
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cin>>a[i][j];
        }
    }
    dfs(1,1);
cout<<"max="<<cmax;

}