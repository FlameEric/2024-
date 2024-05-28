#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,w,k;
    cin>>n>>w>>k;
    queue<int>n_p,w_p;
    for(int i=1;i<=n;i++)
    {
        n_p.push(i);
    }
     for(int i=1;i<=w;i++)
    {
        w_p.push(i);
    }
    while(k--)
    {
        int x,y;
        x=n_p.front();
        n_p.pop();
        y=w_p.front();
        w_p.pop();
        cout<<x<<" "<<y<<endl;
        n_p.push(x);
        w_p.push(y);

    }

}