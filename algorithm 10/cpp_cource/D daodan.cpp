#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int man = 1e5+10;
 
int n, r1, r2;
int a[man], l[man], h[man];
int main () {

     cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    l[1] = h[1] = a[1]; r1 = r2 = 1;
    for(int i = 2; i <= n; ++ i) {
        if (l[r1] >= a[i]) l[++r1] = a[i];
        else *upper_bound(l+1, l+r1+1, a[i], greater<int>()) = a[i];
        if (h[r2] < a[i]) h[++r2] = a[i];
        else *lower_bound(h+1, h+r2+1, a[i]) = a[i];
    } printf("%d",  r2);
    return 0;
}