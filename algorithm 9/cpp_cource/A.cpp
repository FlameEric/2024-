#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
#define ll unsigned long long
using namespace std;
const ll MAXN=1e6+5;
ll a,b,c,n,m,N,M,sum,ans=1e18,tot;
ll ti[MAXN],bi[MAXN],bac1[MAXN],bac2[MAXN];
ll s,ss,tt,t1,t2,t3;
ll read(){
    ll x=0,w=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')w=-1;ch=getchar();}
    while(ch>='0'&&ch<='9')x=x*10+ch-'0',ch=getchar();
    return x*w;
}
int main(){
    a=read();b=read();c=read();
    n=read();t2=m=read();
    for(ll i=1;i<=n;i++)ti[i]=read(),bac1[ti[i]]++;
    for(ll i=1;i<=m;i++)bi[i]=read(),bac2[bi[i]]++,ss+=bi[i];
    for(ll i=1;i<=100000;i++){
        //tt当前不能忍受的人的天数，ss当前需要提前的天数,s是当前可以做贡献的天数
        tt+=bac1[i-1]+t1;t1+=bac1[i-1];
        t2-=bac2[i];ss-=bac2[i]+t2;
        s+=bac2[i-1]+t3;t3+=bac2[i-1];
        sum=tt*c;tot=0;
        if(a<b){
            tot=min(ss,s);sum+=min(ss,s)*a;
        }
        sum=sum+max((ss-tot),(ll)0)*b;
        ans=min(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}
