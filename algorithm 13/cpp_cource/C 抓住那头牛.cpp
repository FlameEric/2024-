#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[1000001];
int dir[2]={-1,1};
int step=0;
int mins=99999;
void dfs(int x)
{
    if(x==k)
    {
        mins=min(step,mins);
        return;
    }
    else
    {
        for(int i=0;i<3;i++)
    {
        int xx;
        if(i!=2)
        {
            xx=x+dir[i];
        }
        else
        {
            xx=x+x;
        }
        if(a[xx]==0&&xx>=0&&xx<=500)
        {
            a[xx]=1;
            step++;
            dfs(xx);
            a[xx]=0;   
            step--;   
        }
    }
    }

    
}
int main()
{
    cin>>n>>k;
    a[n]=1;
    a[k]=0;
    dfs(n);
    cout<<mins;


}