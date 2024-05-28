#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10001];
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9-i;j++)
        {
            if(a[j]>a[j+1])
           {
              int k=a[j];
              a[j]=a[j+1];
              a[j+1]=k;
            }
        }      
    }
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    system("pause");
    return 0;

}