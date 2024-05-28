#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[20],b[20]={0};
int sum=0;
int isprime(int x)
{
    if(x==2)
    return 1;
    else {
        for(int i=2;i*i<=x;i++)
        {
            if(x%i==0)
            return 0;
        }
        return 1;
    }
}
void dfs(int k)
{
    if(k==n+1)
    {
       
       if(isprime(a[1]+a[n]))
       {
        sum++;
       }
        return;
    }
    for(int i=2;i<=n;i++)
    {
        if(b[i]==0&&isprime(i+a[k-1]))
        {
            
                 a[k]=i;
                 b[i]=1;
            
    
            dfs(k+1);
            b[i]=0;
        }
    }

}
int main()
{
    cin>>n;
    a[1]=1,b[1]=1;
    dfs(2);
    cout<<sum;
    return 0;
    system("pause");
   
}