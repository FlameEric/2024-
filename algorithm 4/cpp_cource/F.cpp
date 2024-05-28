#include <bits/stdc++.h>
using namespace std;
int a[100005];
int search(int l,int r,int m)
{
    int mid=0;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]==m)
        {
            return 1;
        }
        else if(a[mid]<m)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return 0;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    for(int i=0;i<m;i++)
    {
        int x=0;
        cin>>x;
        if(search(1,n,x))
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }

    }
    
  
    system("pause");
    return 0;

}