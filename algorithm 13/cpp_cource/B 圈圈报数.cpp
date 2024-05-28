#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    queue<int>np;
    for(int i=1;i<=n;i++)
    {
        np.push(i);
    }
    while (!np.empty())
    {
        int x;
        for(int i=1;i<=m-1;i++)
        {
            x=np.front();
            np.pop();
            np.push(x);
        }
        x=np.front();
        np.pop();
        cout<<x<<" ";
    }
    
}