#include <bits/stdc++.h>
using namespace std;
int n,k;
queue <int> qe;
int vis[200050];
int pos[3];
void dfs()
{
    qe.push(n);
    while (!qe.empty())
    {
        int cur=qe.front();
        qe.pop();
        if(cur==k)
        {
            cout<<vis[cur];
            break;
        }
        pos[0]=cur-1;
        pos[1]=cur+1;
        pos[2]=cur*2;
        for(int i=0;i<3;i++)
        {
            if(!vis[pos[i]]&&pos[i]>=0&&pos[i]<=100000)
            {
                vis[pos[i]]=vis[cur]+1;
                qe.push(pos[i]);
            }
        }
    }
    

}
int main()
{
    cin>>n>>k;
    dfs();
    return 0;
}