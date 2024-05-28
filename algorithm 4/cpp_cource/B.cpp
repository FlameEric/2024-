#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=0;
    while(n!=0)
    {
        k+=n%10;
        n=n/10;

    }
    cout<<k;
    system("pause");
    return 0;

}