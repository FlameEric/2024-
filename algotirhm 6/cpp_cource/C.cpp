#include <bits/stdc++.h>
using namespace std;
int val[30],ans,f[300],n;
char a[260];
int main()
{
    cin>>a+1;
    for(int i=1;i<=26;i++)
    {
        val[a[i]-'a']=i;
    }
    while(cin>>a+1)
    {
        n=strlen(a+1);
        ans=0;
        memset(f,0,sizeof(f));
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(val[a[i]-'a']>val[a[j]-'a'])
                {
                    f[i]=max(f[i],f[j]+1);
                    ans=max(ans,f[i]);
                }
            }
        }
        cout<<ans;
    }
    system("pause");
}