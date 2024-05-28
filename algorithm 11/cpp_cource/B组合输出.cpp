#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[20],b[20]={0};
void dfs(int k)
{
    if(k==m+1)
    {
        for(int i=1;i<=m;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
        return;
    }
    for(int i=k;i<=n-m+k;i++)
    {
        if(b[i]==0&&i>a[k-1])
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
    cin>>n>>m;
    dfs(1);
    a[1]=1;
    return 0;
    system("pause");
   
}