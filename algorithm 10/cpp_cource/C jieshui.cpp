#include<bits/stdc++.h>
using namespace std;
int a[11000];
int b[11000];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int mini=1;
		for(int j=1;j<=m;j++){
			if(b[j]<b[mini]){
				mini=j;
			}
		}
		b[mini]+=a[i];
	}
	int maxn=1;
	for(int i=1;i<=m;i++){
		if(b[i]>b[maxn]){
			maxn=i;
		}
	}
	cout<<b[maxn];
	return 0;
}