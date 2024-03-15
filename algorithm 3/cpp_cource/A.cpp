#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int p;
        cin>>p;
        int pr[10000];
        for(int i=1;i<=p;i++)
        {
           pr[i]=1;
        }
        for(int i=2;i<=p;i++)
        {
            int k=1;
            for(int j=i;j<=p;j=i*k)
            {
                if(pr[j]==0)
                {
                    pr[j]=1;
                }
                else if(pr[j]==1)
                {
                    pr[j]=0;
                }
                k++;              
            }
        }
        int num=0;
         for(int i=1;i<=p;i++)
        {
           if(pr[i]==1)
           {
            num++;
           }
        }
        cout<<num<<endl;

    }
    return 0;
}