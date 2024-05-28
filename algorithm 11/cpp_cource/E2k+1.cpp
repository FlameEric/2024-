#include<bits/stdc++.h>
using namespace std;
bool f(int k,int x)
{
    if(k==x)
        return true;
    if(k>x)
       return false;
    return f(3*k+1,x)||f(2*k+1,x);
}
int main()
{
    int k,x;
    scanf("%d,%d",&k,&x);
    if(f(k,x))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}