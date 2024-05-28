#include <bits/stdc++.h>
using namespace std;
int m,n,c;
int a[10000],b[100000];
int re(int a[],int k,int m)
{
    for(int i=k;i<m;i++)
    {
        a[i]=a[i+1];
    }
    m=m-1;
}
int main()
{
    cin>>m>>n>>c;

    for(int i=1;i<=m;i++)
    {
        cin>>a[i];
    }
     for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    int num=0;
    for(int i=1;i<=n;i++)
    {
        int res=0;
        int minl=99999;
        int k=0;
        for(int j=1;j<=m;j++)
        {
            res=abs(a[j]-b[i]);
            if(res<=c&&res>=0)
            {
                if(res<minl)
                {
                    minl=res;
                    k=j;
                }
            }
        }
        if(k!=0)
        {
            re(a,k,m);
            num++;
        } 
    }
    cout<<num;

}