#include<cstdio>
#include<algorithm>//用到sort
using namespace std;
const int MAXN=2020;//毕竟刚刚2020~
int a[MAXN],b[MAXN];//横线和竖线的代价
bool cmp(int aa,int bb){return aa>bb;}//从大到小
int main(){
	int n,m,s1=1,s2=1;//s1和s2可以是a数组和b数组的指针，也可以是横纵分成的块数
	scanf("%d%d",&n,&m);
	for(int i=1;i<n;i++) scanf("%d",&a[i]);
	for(int i=1;i<m;i++) scanf("%d",&b[i]);
	sort(a+1,a+n,cmp);sort(b+1,b+m,cmp);//从大到小排序
	long long ans=0;//记录答案，注意long long
	for(int i=2;i<n+m;i++){//遍历
		if(a[s1]>b[s2]) ans+=s2*a[s1++];//选择大的，这里s2表示块数，s1指针后移一位
		else ans+=s1*b[s2++];//同理，和上面相反
	}
	printf("%lld",ans);
	return 0;//华丽结束
}