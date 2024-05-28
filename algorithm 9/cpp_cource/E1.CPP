#include<iostream>
#include<algorithm>
using namespace std;
int a[1010],b[1010];
int main(){
    int n,m,k;
    scanf("%d %d %d", &n,&m,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); // 男生身高
    }
    for(int j=0;j<m;j++){
        scanf("%d",&b[j]); // 女生身高
    }
    sort(a,a+n);
    sort(b,b+m);
    int res = 0;
    for(int i=0,j=0;i<n && j<m;){
        if(abs(a[i] - b[j]) <= k){
            res ++;
            i ++;
            j ++;
        }else if(a[i] - b[j] > k){ // 男生太高
            j ++;
        }else{ // 女生太高
            i ++;
        }
    }
    printf("%d",res);
    return 0;
}