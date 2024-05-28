#include <bits/stdc++.h>
using namespace std;
/*int n;
int a[10010];
int k=1;
void fanhui(int a[])
{
    for(int i=0;i<n-k;i++)
    {
        a[i]=a[i+1];
    }
    k++;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int n1=0;
    for(int i=1;i<=n-1;i++)
    {
        int num=a[1];
        a[1]=a[0]+a[1];
        n1+=a[1];
        fanhui(a);
    }
    cout<<n1;
    system("pause");
    
}
*/

long long a[1000005];
long long n,ans;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        sort(a+i,a+i+n);
        a[i+1]+=a[i];
        ans+=a[i+1];
    }
    cout<<a[i+1];

}